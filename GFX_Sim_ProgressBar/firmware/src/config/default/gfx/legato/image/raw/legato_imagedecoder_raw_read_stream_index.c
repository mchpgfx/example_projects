// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END


#include "gfx/legato/image/raw/legato_imagedecoder_raw.h"

#if LE_ENABLE_RAW_DECODER == 1

#if LE_STREAMING_ENABLED == 1

#include "gfx/legato/renderer/legato_renderer.h"
#include "gfx/legato/image/legato_image_utils.h"

#define cache leRawImageDecoderScratchBuffer

void _leRawImageDecoder_InjectStage(leRawDecodeState* sliderChanged,
                                    leRawDecodeStage* stage);

enum StageState
{
    SS_READY,
    SS_STALLED,
    SS_DONE
};

struct StreamReadStage
{
    leRawDecodeStage base;

    uint32_t mod;

    lePixelBuffer readBuffer;

    enum StageState sliderChanged;

    leStream stream;
};

static LE_COHERENT_ATTR struct StreamReadStage streamReadStage;

static leResult advanceStage(void)
{
    streamReadStage.base.sliderChanged->readIndex += 1;

    if(streamReadStage.base.sliderChanged->readIndex < streamReadStage.base.sliderChanged->readCount)
    {
        return LE_FAILURE;
    }
    else
    {
        // reset for next iteration
        streamReadStage.base.sliderChanged->readIndex = 0;

        streamReadStage.state = SS_DONE;

        return LE_SUCCESS;
    }
}

static void indexDataReady(leStream* strm)
{
    (void)strm; // unused

    leRawSourceReadOperation* op = &streamReadStage.base.sliderChanged->readOperation[streamReadStage.base.sliderChanged->readIndex];

    streamReadStage.readBuffer.pixels = &op->data;

    // get a pixel from the buffer
    op->data = lePixelBufferGetIndex_Unsafe(&streamReadStage.readBuffer,
                                            op->bufferIndex % streamReadStage.mod);

    streamReadStage.state = SS_READY;

    // resume processing
    advanceStage();
}

static leResult exec_nonblocking(struct StreamReadStage* stage)
{
    (void)stage; // unused

    uint32_t offs;

    // no need to do anything if a data read is still pending
    if(streamReadStage.state == SS_STALLED)
        return LE_FAILURE;

    if(streamReadStage.state == SS_DONE)
    {
        streamReadStage.state = SS_READY;

        return LE_SUCCESS;
    }

    // attempt to decode a pixel value
    leRawSourceReadOperation* op = &streamReadStage.base.sliderChanged->readOperation[streamReadStage.base.sliderChanged->readIndex];

    // calculate the offset of the desired pixel in bytes
    offs = leGetOffsetFromIndexAndBPP(op->bufferIndex,
                                      leColorInfoTable[streamReadStage.base.sliderChanged->source->buffer.mode].bppOrdinal);

    // read an index value
    if(leStream_Read(&streamReadStage.stream,
                     (uint32_t)streamReadStage.base.sliderChanged->source->header.address + offs,
                     leColorInfoTable[streamReadStage.base.sliderChanged->source->buffer.mode].size,
                     (uint8_t*)&op->data,
                     indexDataReady) == LE_FAILURE)
    {
        return LE_FAILURE;
    }

    // only stall out of the read is still pending
    if(leStream_IsDataReady(&streamReadStage.stream) == LE_FALSE)
    {
        streamReadStage.state = SS_STALLED;

        return LE_FAILURE;
    }

    advanceStage();

    if(streamReadStage.state == SS_DONE)
    {
        streamReadStage.state = SS_READY;

        return LE_SUCCESS;
    }

    return LE_FAILURE;
}

static leResult exec_blocking(struct StreamReadStage* stage)
{
    uint32_t offs;
    leRawSourceReadOperation* op;

    stage->base.sliderChanged->readIndex = 0;

    for(stage->base.sliderChanged->readIndex = 0;
        stage->base.sliderChanged->readIndex < stage->base.sliderChanged->readCount;
        stage->base.sliderChanged->readIndex++)
    {
        op = &streamReadStage.base.sliderChanged->readOperation[streamReadStage.base.sliderChanged->readIndex];

        // calculate the offset of the desired pixel in bytes
        offs = leGetOffsetFromIndexAndBPP(op->bufferIndex,
                                          leColorInfoTable[streamReadStage.base.sliderChanged->source->buffer.mode].bppOrdinal);

        // read an index value
        while(leStream_Read(&streamReadStage.stream,
                           (uint32_t)streamReadStage.base.sliderChanged->source->header.address + offs,
                           leColorInfoTable[streamReadStage.base.sliderChanged->source->buffer.mode].size,
                           (uint8_t*)&op->data,
                           NULL) != LE_SUCCESS)
        { }

        streamReadStage.readBuffer.pixels = &op->data;

        // get a pixel from the buffer
        op->data = lePixelBufferGetIndex_Unsafe(&streamReadStage.readBuffer,
                                                op->bufferIndex % streamReadStage.mod);

        streamReadStage.base.sliderChanged->readIndex += 1;

        /*printf("%i, %i, %u\n", op->x,
                               op->y,
                               op->data);*/
    }

    return LE_SUCCESS;
}

static void cleanup(struct StreamReadStage* stage)
{
    (void)stage; // unused

    leStream_Close(&streamReadStage.stream);
}

leResult _leRawImageDecoder_ReadStage_StreamIndex(leRawDecodeState* sliderChanged)
{
    memset(&streamReadStage, 0, sizeof(streamReadStage));

    if(sliderChanged->source->buffer.mode == LE_COLOR_MODE_INDEX_1)
    {
        streamReadStage.mod = 8;
    }
    else if(sliderChanged->source->buffer.mode == LE_COLOR_MODE_INDEX_4)
    {
        streamReadStage.mod = 2;
    }
    else
    {
        streamReadStage.mod = 1;
    }

    leStream_Init(&streamReadStage.stream,
                  (struct leStreamDescriptor*)sliderChanged->source,
                  LE_ASSET_DECODER_PIXEL_CACHE_SIZE,
                  leRawImageDecoderScratchBuffer,
                  NULL);

    if(leStream_Open(&streamReadStage.stream) == LE_FAILURE)
    {
        return LE_FAILURE;
    }

    streamReadStage.base.sliderChanged = sliderChanged;
    streamReadStage.base.cleanup = (void*)cleanup;

    if(leStream_IsBlocking(&streamReadStage.stream) == LE_TRUE)
    {
        streamReadStage.base.exec = (void*)exec_blocking;
    }
    else
    {
        streamReadStage.base.exec = (void*)exec_nonblocking;
    }

    lePixelBufferCreate(leColorInfoTable[sliderChanged->source->buffer.mode].size,
                        1,
                        sliderChanged->source->buffer.mode,
                        NULL,
                        &streamReadStage.readBuffer);

    _leRawImageDecoder_InjectStage(sliderChanged, (void*)&streamReadStage);

    return LE_SUCCESS;
}

#endif

#endif /* LE_ENABLE_RAW_DECODER */