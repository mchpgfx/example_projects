#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../src/config/default/gfx/driver/gfx_driver.c ../src/config/default/gfx/legato/common/legato_color_lerp.c ../src/config/default/gfx/legato/common/legato_utils.c ../src/config/default/gfx/legato/common/legato_error.c ../src/config/default/gfx/legato/common/legato_math.c ../src/config/default/gfx/legato/common/legato_color.c ../src/config/default/gfx/legato/common/legato_color_convert.c ../src/config/default/gfx/legato/common/legato_color_blend.c ../src/config/default/gfx/legato/common/legato_rect.c ../src/config/default/gfx/legato/common/legato_pixelbuffer.c ../src/config/default/gfx/legato/common/legato_color_value.c ../src/config/default/gfx/legato/core/legato_input.c ../src/config/default/gfx/legato/core/legato_scheme.c ../src/config/default/gfx/legato/core/legato_event.c ../src/config/default/gfx/legato/core/legato_stream.c ../src/config/default/gfx/legato/core/legato_state.c ../src/config/default/gfx/legato/datastructure/legato_array.c ../src/config/default/gfx/legato/datastructure/legato_list.c ../src/config/default/gfx/legato/datastructure/legato_rectarray.c ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c ../src/config/default/gfx/legato/font/legato_font.c ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c ../src/config/default/gfx/legato/generated/image/le_gen_images.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c ../src/config/default/gfx/legato/generated/le_gen_harmony.c ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c ../src/config/default/gfx/legato/generated/le_gen_init.c ../src/config/default/gfx/legato/generated/le_gen_stringtable.c ../src/config/default/gfx/legato/generated/le_gen_scheme.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c ../src/config/default/gfx/legato/image/jpeg/jidctint.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c ../src/config/default/gfx/legato/image/png/lodepng.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c ../src/config/default/gfx/legato/image/legato_palette.c ../src/config/default/gfx/legato/image/legato_image_utils.c ../src/config/default/gfx/legato/image/legato_image.c ../src/config/default/gfx/legato/memory/legato_fixedheap.c ../src/config/default/gfx/legato/memory/legato_memory.c ../src/config/default/gfx/legato/memory/legato_variableheap.c ../src/config/default/gfx/legato/renderer/legato_draw.c ../src/config/default/gfx/legato/renderer/legato_gpu.c ../src/config/default/gfx/legato/renderer/legato_draw_arc.c ../src/config/default/gfx/legato/renderer/legato_draw_rect.c ../src/config/default/gfx/legato/renderer/legato_renderer.c ../src/config/default/gfx/legato/renderer/legato_draw_line.c ../src/config/default/gfx/legato/string/legato_stringtable.c ../src/config/default/gfx/legato/string/legato_tablestring.c ../src/config/default/gfx/legato/string/legato_stringutils.c ../src/config/default/gfx/legato/string/legato_dynamicstring.c ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c ../src/config/default/gfx/legato/string/legato_string.c ../src/config/default/gfx/legato/string/legato_string_renderer.c ../src/config/default/gfx/legato/string/legato_fixedstring.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c ../src/config/default/gfx/legato/widget/button/legato_widget_button.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c ../src/config/default/gfx/legato/widget/image/legato_widget_image.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label.c ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c ../src/config/default/gfx/legato/widget/line/legato_widget_line.c ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c ../src/config/default/gfx/legato/widget/list/legato_widget_list.c ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window.c ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c ../src/config/default/gfx/legato/widget/legato_editwidget.c ../src/config/default/gfx/legato/widget/legato_widget.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c ../src/config/default/gfx/simulator/gfx_simulator.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/evic/plib_evic.c ../src/config/default/peripheral/gpio/plib_gpio.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/input/sys_input_listener.c ../src/config/default/system/input/sys_input.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/system/time/src/sys_time.c ../src/config/default/initialization.c ../src/config/default/exceptions.c ../src/config/default/tasks.c ../src/config/default/interrupts.c ../src/app.c ../src/main.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1319235455/gfx_driver.o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ${OBJECTDIR}/_ext/1510041067/legato_error.o ${OBJECTDIR}/_ext/1510041067/legato_math.o ${OBJECTDIR}/_ext/1510041067/legato_color.o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ${OBJECTDIR}/_ext/92283465/legato_input.o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ${OBJECTDIR}/_ext/92283465/legato_event.o ${OBJECTDIR}/_ext/92283465/legato_stream.o ${OBJECTDIR}/_ext/92283465/legato_state.o ${OBJECTDIR}/_ext/2021927327/legato_array.o ${OBJECTDIR}/_ext/2021927327/legato_list.o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ${OBJECTDIR}/_ext/92372729/legato_font.o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ${OBJECTDIR}/_ext/1395618758/jidctint.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ${OBJECTDIR}/_ext/460667659/lodepng.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ${OBJECTDIR}/_ext/1428714511/legato_image.o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ${OBJECTDIR}/_ext/656756333/legato_draw.o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ${OBJECTDIR}/_ext/1047211973/legato_string.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ${OBJECTDIR}/_ext/943273362/legato_widget.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ${OBJECTDIR}/_ext/1008098389/sys_input.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/101884895/sys_time.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d ${OBJECTDIR}/_ext/1510041067/legato_error.o.d ${OBJECTDIR}/_ext/1510041067/legato_math.o.d ${OBJECTDIR}/_ext/1510041067/legato_color.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d ${OBJECTDIR}/_ext/92283465/legato_input.o.d ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d ${OBJECTDIR}/_ext/92283465/legato_event.o.d ${OBJECTDIR}/_ext/92283465/legato_stream.o.d ${OBJECTDIR}/_ext/92283465/legato_state.o.d ${OBJECTDIR}/_ext/2021927327/legato_array.o.d ${OBJECTDIR}/_ext/2021927327/legato_list.o.d ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d ${OBJECTDIR}/_ext/92372729/legato_font.o.d ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d ${OBJECTDIR}/_ext/1395618758/jidctint.o.d ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d ${OBJECTDIR}/_ext/460667659/lodepng.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d ${OBJECTDIR}/_ext/1428714511/legato_image.o.d ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d ${OBJECTDIR}/_ext/656756333/legato_draw.o.d ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d ${OBJECTDIR}/_ext/1047211973/legato_string.o.d ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d ${OBJECTDIR}/_ext/943273362/legato_widget.o.d ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d ${OBJECTDIR}/_ext/60165520/plib_clk.o.d ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d ${OBJECTDIR}/_ext/1008098389/sys_input.o.d ${OBJECTDIR}/_ext/1881668453/sys_int.o.d ${OBJECTDIR}/_ext/101884895/sys_time.o.d ${OBJECTDIR}/_ext/1171490990/initialization.o.d ${OBJECTDIR}/_ext/1171490990/exceptions.o.d ${OBJECTDIR}/_ext/1171490990/tasks.o.d ${OBJECTDIR}/_ext/1171490990/interrupts.o.d ${OBJECTDIR}/_ext/1360937237/app.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1319235455/gfx_driver.o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ${OBJECTDIR}/_ext/1510041067/legato_error.o ${OBJECTDIR}/_ext/1510041067/legato_math.o ${OBJECTDIR}/_ext/1510041067/legato_color.o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ${OBJECTDIR}/_ext/92283465/legato_input.o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ${OBJECTDIR}/_ext/92283465/legato_event.o ${OBJECTDIR}/_ext/92283465/legato_stream.o ${OBJECTDIR}/_ext/92283465/legato_state.o ${OBJECTDIR}/_ext/2021927327/legato_array.o ${OBJECTDIR}/_ext/2021927327/legato_list.o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ${OBJECTDIR}/_ext/92372729/legato_font.o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ${OBJECTDIR}/_ext/1395618758/jidctint.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ${OBJECTDIR}/_ext/460667659/lodepng.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ${OBJECTDIR}/_ext/1428714511/legato_image.o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ${OBJECTDIR}/_ext/656756333/legato_draw.o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ${OBJECTDIR}/_ext/1047211973/legato_string.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ${OBJECTDIR}/_ext/943273362/legato_widget.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ${OBJECTDIR}/_ext/1008098389/sys_input.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/101884895/sys_time.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1171490990/exceptions.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o

# Source Files
SOURCEFILES=../src/config/default/gfx/driver/gfx_driver.c ../src/config/default/gfx/legato/common/legato_color_lerp.c ../src/config/default/gfx/legato/common/legato_utils.c ../src/config/default/gfx/legato/common/legato_error.c ../src/config/default/gfx/legato/common/legato_math.c ../src/config/default/gfx/legato/common/legato_color.c ../src/config/default/gfx/legato/common/legato_color_convert.c ../src/config/default/gfx/legato/common/legato_color_blend.c ../src/config/default/gfx/legato/common/legato_rect.c ../src/config/default/gfx/legato/common/legato_pixelbuffer.c ../src/config/default/gfx/legato/common/legato_color_value.c ../src/config/default/gfx/legato/core/legato_input.c ../src/config/default/gfx/legato/core/legato_scheme.c ../src/config/default/gfx/legato/core/legato_event.c ../src/config/default/gfx/legato/core/legato_stream.c ../src/config/default/gfx/legato/core/legato_state.c ../src/config/default/gfx/legato/datastructure/legato_array.c ../src/config/default/gfx/legato/datastructure/legato_list.c ../src/config/default/gfx/legato/datastructure/legato_rectarray.c ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c ../src/config/default/gfx/legato/font/legato_font.c ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c ../src/config/default/gfx/legato/generated/image/le_gen_images.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c ../src/config/default/gfx/legato/generated/le_gen_harmony.c ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c ../src/config/default/gfx/legato/generated/le_gen_init.c ../src/config/default/gfx/legato/generated/le_gen_stringtable.c ../src/config/default/gfx/legato/generated/le_gen_scheme.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c ../src/config/default/gfx/legato/image/jpeg/jidctint.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c ../src/config/default/gfx/legato/image/png/lodepng.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c ../src/config/default/gfx/legato/image/legato_palette.c ../src/config/default/gfx/legato/image/legato_image_utils.c ../src/config/default/gfx/legato/image/legato_image.c ../src/config/default/gfx/legato/memory/legato_fixedheap.c ../src/config/default/gfx/legato/memory/legato_memory.c ../src/config/default/gfx/legato/memory/legato_variableheap.c ../src/config/default/gfx/legato/renderer/legato_draw.c ../src/config/default/gfx/legato/renderer/legato_gpu.c ../src/config/default/gfx/legato/renderer/legato_draw_arc.c ../src/config/default/gfx/legato/renderer/legato_draw_rect.c ../src/config/default/gfx/legato/renderer/legato_renderer.c ../src/config/default/gfx/legato/renderer/legato_draw_line.c ../src/config/default/gfx/legato/string/legato_stringtable.c ../src/config/default/gfx/legato/string/legato_tablestring.c ../src/config/default/gfx/legato/string/legato_stringutils.c ../src/config/default/gfx/legato/string/legato_dynamicstring.c ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c ../src/config/default/gfx/legato/string/legato_string.c ../src/config/default/gfx/legato/string/legato_string_renderer.c ../src/config/default/gfx/legato/string/legato_fixedstring.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c ../src/config/default/gfx/legato/widget/button/legato_widget_button.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c ../src/config/default/gfx/legato/widget/image/legato_widget_image.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label.c ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c ../src/config/default/gfx/legato/widget/line/legato_widget_line.c ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c ../src/config/default/gfx/legato/widget/list/legato_widget_list.c ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window.c ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c ../src/config/default/gfx/legato/widget/legato_editwidget.c ../src/config/default/gfx/legato/widget/legato_widget.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c ../src/config/default/gfx/simulator/gfx_simulator.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/evic/plib_evic.c ../src/config/default/peripheral/gpio/plib_gpio.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/input/sys_input_listener.c ../src/config/default/system/input/sys_input.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/system/time/src/sys_time.c ../src/config/default/initialization.c ../src/config/default/exceptions.c ../src/config/default/tasks.c ../src/config/default/interrupts.c ../src/app.c ../src/main.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MZ2064DAR176
MP_LINKER_FILE_OPTION=,--script="..\src\config\default\p32MZ2064DAR176.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1319235455/gfx_driver.o: ../src/config/default/gfx/driver/gfx_driver.c  .generated_files/flags/default/d95a069ddf06def55279c5530ccda3af29e76301 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1319235455" 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d" -o ${OBJECTDIR}/_ext/1319235455/gfx_driver.o ../src/config/default/gfx/driver/gfx_driver.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o: ../src/config/default/gfx/legato/common/legato_color_lerp.c  .generated_files/flags/default/31e5167ad9eade7eb356afa1e075e651e504b600 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ../src/config/default/gfx/legato/common/legato_color_lerp.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_utils.o: ../src/config/default/gfx/legato/common/legato_utils.c  .generated_files/flags/default/483a3ea5e9d72f3f7e2ff6953b456de5c501383f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_utils.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ../src/config/default/gfx/legato/common/legato_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_error.o: ../src/config/default/gfx/legato/common/legato_error.c  .generated_files/flags/default/afe906c3dbeca4bde5c314c61547ba108cf6f74a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_error.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_error.o ../src/config/default/gfx/legato/common/legato_error.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_math.o: ../src/config/default/gfx/legato/common/legato_math.c  .generated_files/flags/default/d3226211f22ca9b245ec862e991e37d4f8a127e2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_math.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_math.o ../src/config/default/gfx/legato/common/legato_math.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color.o: ../src/config/default/gfx/legato/common/legato_color.c  .generated_files/flags/default/f8155e3b4bd284bb023f494467c8ab8738d131b6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color.o ../src/config/default/gfx/legato/common/legato_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_convert.o: ../src/config/default/gfx/legato/common/legato_color_convert.c  .generated_files/flags/default/8391c4d5972e5a987cd010ed576e2af169ab71eb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ../src/config/default/gfx/legato/common/legato_color_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_blend.o: ../src/config/default/gfx/legato/common/legato_color_blend.c  .generated_files/flags/default/7b3d8287feb8610cb9e9039153b0fddacaa9353f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ../src/config/default/gfx/legato/common/legato_color_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_rect.o: ../src/config/default/gfx/legato/common/legato_rect.c  .generated_files/flags/default/c9b85837ca4d8a56369221ae27e58ab09da59a86 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_rect.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ../src/config/default/gfx/legato/common/legato_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o: ../src/config/default/gfx/legato/common/legato_pixelbuffer.c  .generated_files/flags/default/bc76a150260f67a8d481aaf943f8a03e601a00af .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ../src/config/default/gfx/legato/common/legato_pixelbuffer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_value.o: ../src/config/default/gfx/legato/common/legato_color_value.c  .generated_files/flags/default/22f8c8617f27c4f089fe13cb1f6f0d3d743848e3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ../src/config/default/gfx/legato/common/legato_color_value.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_input.o: ../src/config/default/gfx/legato/core/legato_input.c  .generated_files/flags/default/dce53a57622696120c03f50295d2e3e17ba905dc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_input.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_input.o ../src/config/default/gfx/legato/core/legato_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_scheme.o: ../src/config/default/gfx/legato/core/legato_scheme.c  .generated_files/flags/default/ddcf70a82dd8e895d6f2ea11b5fb5ed5e7927c15 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_scheme.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ../src/config/default/gfx/legato/core/legato_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_event.o: ../src/config/default/gfx/legato/core/legato_event.c  .generated_files/flags/default/a8ae66f7c1de3715106404d3f2015215eca624f6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_event.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_event.o ../src/config/default/gfx/legato/core/legato_event.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_stream.o: ../src/config/default/gfx/legato/core/legato_stream.c  .generated_files/flags/default/569ff461bbdfaa69e13cdf1d41e77d66d5f9a83a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_stream.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_stream.o ../src/config/default/gfx/legato/core/legato_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_state.o: ../src/config/default/gfx/legato/core/legato_state.c  .generated_files/flags/default/1fb9b8d336e2763b7fcb7ec0c1043e691f625baa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_state.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_state.o ../src/config/default/gfx/legato/core/legato_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_array.o: ../src/config/default/gfx/legato/datastructure/legato_array.c  .generated_files/flags/default/16d5ecc7e852fcce9d29cbeb33ce3bed71d38cdc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_array.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_array.o ../src/config/default/gfx/legato/datastructure/legato_array.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_list.o: ../src/config/default/gfx/legato/datastructure/legato_list.c  .generated_files/flags/default/92cbfd57fd1de099012c0221e2201c9bc7838a41 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_list.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_list.o ../src/config/default/gfx/legato/datastructure/legato_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_rectarray.o: ../src/config/default/gfx/legato/datastructure/legato_rectarray.c  .generated_files/flags/default/65da9208278d32f95678083eefc8ea5e3ac7bd37 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ../src/config/default/gfx/legato/datastructure/legato_rectarray.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o: ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c  .generated_files/flags/default/37045477cfd098b2d5494bacfae1d1592b8bc251 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c  .generated_files/flags/default/d0930af6f6c177535551c2b13131f52493f129bd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c  .generated_files/flags/default/325725ecf65c072f7d7b28e5a54271f34b2d4f77 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_font.o: ../src/config/default/gfx/legato/font/legato_font.c  .generated_files/flags/default/eac1b6f7f6abd00121e7ab12a84f57df8bc78a4f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_font.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_font.o ../src/config/default/gfx/legato/font/legato_font.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o: ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c  .generated_files/flags/default/ca31750e9c26962c25b7f382c4ae6037d139f24e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1494086919" 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d" -o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/930643953/le_gen_images.o: ../src/config/default/gfx/legato/generated/image/le_gen_images.c  .generated_files/flags/default/e88f053986b5ddb68ba981c49fc9d251ae9364f2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/930643953" 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/930643953/le_gen_images.o.d" -o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ../src/config/default/gfx/legato/generated/image/le_gen_images.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c  .generated_files/flags/default/93a85bb6fec02a397049d4e2a466b01045101dd7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o: ../src/config/default/gfx/legato/generated/le_gen_harmony.c  .generated_files/flags/default/dbc5409e643a2c3e33dcc882742ad6feb25e7059 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ../src/config/default/gfx/legato/generated/le_gen_harmony.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o: ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c  .generated_files/flags/default/4a60932a0cedc59b9a729d806ae77786d39386f2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_init.o: ../src/config/default/gfx/legato/generated/le_gen_init.c  .generated_files/flags/default/95779bca3cb915fa8470e26899dbd6c991e689d6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ../src/config/default/gfx/legato/generated/le_gen_init.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o: ../src/config/default/gfx/legato/generated/le_gen_stringtable.c  .generated_files/flags/default/1805d80a7fd6e8e7ca4b2e7ff2a7c06cf0d69287 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ../src/config/default/gfx/legato/generated/le_gen_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o: ../src/config/default/gfx/legato/generated/le_gen_scheme.c  .generated_files/flags/default/e93a3d4ae9823fd9f76e69957525dd7738cf12b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ../src/config/default/gfx/legato/generated/le_gen_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c  .generated_files/flags/default/77db2631040cbcbc301eaa468c964d5aca36e90f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/jidctint.o: ../src/config/default/gfx/legato/image/jpeg/jidctint.c  .generated_files/flags/default/4a92ffffb030731012f65a4aa012ca74c6f10d9d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/jidctint.o.d" -o ${OBJECTDIR}/_ext/1395618758/jidctint.o ../src/config/default/gfx/legato/image/jpeg/jidctint.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c  .generated_files/flags/default/9d71b81bb98eea43aad611586ccaa78bde49c52d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c  .generated_files/flags/default/7e6d910332c13bed125eed77c09e1bd49e39fd0c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c  .generated_files/flags/default/c9b0bb86cfd23955b74ec85e655398095778e3a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c  .generated_files/flags/default/6ec26a79fe1b6c0036e5fd28f0947ff9439d1ca6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o: ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c  .generated_files/flags/default/85ff91ac26f2040a5d85b251d94b74617d3ab962 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d" -o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/lodepng.o: ../src/config/default/gfx/legato/image/png/lodepng.c  .generated_files/flags/default/371d5de708bbe07a2a0da10d7c570fb3160025 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/lodepng.o.d" -o ${OBJECTDIR}/_ext/460667659/lodepng.o ../src/config/default/gfx/legato/image/png/lodepng.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c  .generated_files/flags/default/b91702fbf1a0840f3d9d0db0b4055fc8f57aa2d4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c  .generated_files/flags/default/5db672ba20cda4e73049121b1c43acd6053da99d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c  .generated_files/flags/default/c4b3bbf2d1881ef3b2be382ec5d5804b9b1d8f73 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c  .generated_files/flags/default/47f4af8b9b0471d8c9df63fb4c5b0a54ecaf5fc4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c  .generated_files/flags/default/ed18ef9030ecd38226c817c5e342c212176391ac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c  .generated_files/flags/default/67ac16e326eb93e010759ff59783d77c7ddcbaa6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c  .generated_files/flags/default/f32584e76a5e66f9beb8774927894a2993e80ec9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c  .generated_files/flags/default/a1aa2938f0a543af3d7b0dace10683914e6acc98 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c  .generated_files/flags/default/254c44039377bb535abbc15b145ae427b3cac289 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c  .generated_files/flags/default/9df3594bbf20205edfa0b38e7f2d3f7558038c3c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c  .generated_files/flags/default/79790c2a7b1406e952fc81a786f83e1e1499246 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c  .generated_files/flags/default/cb3f8b00a3c24b17b6b8dbfc908a749a31479520 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c  .generated_files/flags/default/f2016b66f404d9f47c579db5a363048a51815ff1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c  .generated_files/flags/default/d5030e0f5ba6d803e19571b9e20e6fb407a1e4c0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c  .generated_files/flags/default/a41efb7df522a743fae8dd5d25f17a6e938d3014 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_palette.o: ../src/config/default/gfx/legato/image/legato_palette.c  .generated_files/flags/default/6ecc0db57003ec087b2a8e3cf98bba4fc8b3dd82 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_palette.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ../src/config/default/gfx/legato/image/legato_palette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image_utils.o: ../src/config/default/gfx/legato/image/legato_image_utils.c  .generated_files/flags/default/17c9fdd09039f024f7e5c9202f6386e72ddb03ad .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ../src/config/default/gfx/legato/image/legato_image_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image.o: ../src/config/default/gfx/legato/image/legato_image.c  .generated_files/flags/default/4d0ec80b8c77b0618abb3425da26f4b49e81719b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image.o ../src/config/default/gfx/legato/image/legato_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o: ../src/config/default/gfx/legato/memory/legato_fixedheap.c  .generated_files/flags/default/76681d431a4929b5827c0127987c540abc98b68f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ../src/config/default/gfx/legato/memory/legato_fixedheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_memory.o: ../src/config/default/gfx/legato/memory/legato_memory.c  .generated_files/flags/default/dc3eebb8124b599142bc2188bef15cf4aa9f1b9d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_memory.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ../src/config/default/gfx/legato/memory/legato_memory.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_variableheap.o: ../src/config/default/gfx/legato/memory/legato_variableheap.c  .generated_files/flags/default/bf638191e5ffa39148acb3533c2e0200ed98a303 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ../src/config/default/gfx/legato/memory/legato_variableheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw.o: ../src/config/default/gfx/legato/renderer/legato_draw.c  .generated_files/flags/default/9f97df039eac2bc2be3f419228c564013c2beaac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw.o ../src/config/default/gfx/legato/renderer/legato_draw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_gpu.o: ../src/config/default/gfx/legato/renderer/legato_gpu.c  .generated_files/flags/default/36f3b873f9a34f59c856f62110179aad9460a333 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_gpu.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ../src/config/default/gfx/legato/renderer/legato_gpu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_arc.o: ../src/config/default/gfx/legato/renderer/legato_draw_arc.c  .generated_files/flags/default/9425dbd2c7561bcce159fa5e134f61a3dbf18e2c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ../src/config/default/gfx/legato/renderer/legato_draw_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_rect.o: ../src/config/default/gfx/legato/renderer/legato_draw_rect.c  .generated_files/flags/default/ab7470756dcfd3e3258d2864153b680942d2a02d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ../src/config/default/gfx/legato/renderer/legato_draw_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_renderer.o: ../src/config/default/gfx/legato/renderer/legato_renderer.c  .generated_files/flags/default/9d9cdba3af0cb226d868a04c1fd17d851a5360f7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_renderer.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ../src/config/default/gfx/legato/renderer/legato_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_line.o: ../src/config/default/gfx/legato/renderer/legato_draw_line.c  .generated_files/flags/default/fd8e13c6f20b56fb898a85dc54f270f24e9feec0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ../src/config/default/gfx/legato/renderer/legato_draw_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringtable.o: ../src/config/default/gfx/legato/string/legato_stringtable.c  .generated_files/flags/default/4bf7d7bba17dde48633e9226a773cb076208dbab .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ../src/config/default/gfx/legato/string/legato_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_tablestring.o: ../src/config/default/gfx/legato/string/legato_tablestring.c  .generated_files/flags/default/95265e7930905ce24da4dfed2eb848aac4fa1a2b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ../src/config/default/gfx/legato/string/legato_tablestring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringutils.o: ../src/config/default/gfx/legato/string/legato_stringutils.c  .generated_files/flags/default/c1a5ebe714c96893abb758c097ad74d3ef38bd6c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ../src/config/default/gfx/legato/string/legato_stringutils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o: ../src/config/default/gfx/legato/string/legato_dynamicstring.c  .generated_files/flags/default/6cfb2b5fd2f0c931d85dff1b7bde0297f9cd50f5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ../src/config/default/gfx/legato/string/legato_dynamicstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o: ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c  .generated_files/flags/default/3362ca9e531a88261bc2f8236c2a8f0e4c571617 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string.o: ../src/config/default/gfx/legato/string/legato_string.c  .generated_files/flags/default/5a155871729e73f8c2c97c68b65858e9f51a23a0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string.o ../src/config/default/gfx/legato/string/legato_string.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o: ../src/config/default/gfx/legato/string/legato_string_renderer.c  .generated_files/flags/default/f1e91dc8187a1a3d4fc5432a849cafd94ac0739b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ../src/config/default/gfx/legato/string/legato_string_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o: ../src/config/default/gfx/legato/string/legato_fixedstring.c  .generated_files/flags/default/d6ec301f4beaddf057b6faedb9f6093dce953d62 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ../src/config/default/gfx/legato/string/legato_fixedstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c  .generated_files/flags/default/ccd0ed5920ac8c123e471c7ac9d6c14ce0b8db23 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c  .generated_files/flags/default/4ff53ffa68c5c1ae6471f30c2ef08a6614a96bae .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c  .generated_files/flags/default/57009500eb381fd94d45028bfa1e28d57e74df7d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c  .generated_files/flags/default/739de8b41c61a26593ccd93efba4d95efe70f04d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c  .generated_files/flags/default/100009bf7c02c38c5772f3c70c26327e70a7a989 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button.c  .generated_files/flags/default/ebb7e9aa66de6f3918f4db2dffe59861b8bf8134 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ../src/config/default/gfx/legato/widget/button/legato_widget_button.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c  .generated_files/flags/default/5bc77dc90f27cc28043f6497f4a7b8e00d05f4b9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c  .generated_files/flags/default/40600c85c4e1e6d0b7364f3015188f80d2ff9a74 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c  .generated_files/flags/default/1a0d0c743b94264db5c89c667e6f01e1a3e07f66 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c  .generated_files/flags/default/82cf792e621736106f1c6ee92c646382d7aeccc5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c  .generated_files/flags/default/84419a3415cd0a198c99497218c892950c4b30bd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c  .generated_files/flags/default/a0c68507fb019c3412257230e3c06459f045fab7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c  .generated_files/flags/default/7d8101585ed0f95eb504a3f0f72414f1e1f6ed3b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c  .generated_files/flags/default/b708393d5476e26d4d841ccd12c7da79dfb287ac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c  .generated_files/flags/default/82d3826def4ea92a0cfea4ebe47f402ea5926c42 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c  .generated_files/flags/default/ebc86022921f78a5d04617e65ea7d6a405575943 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c  .generated_files/flags/default/a473a6ba0f95bc3a6de229a7d5d119a1a885fc61 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c  .generated_files/flags/default/af604c3edd99e8bc5cef234d646767d7ce14d4a4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c  .generated_files/flags/default/512b3d8a701122275255a419c1d562a9c3088da9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c  .generated_files/flags/default/da1dcf831cbb255e765a7943bf261256a5666d6d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c  .generated_files/flags/default/8603d299feee89a676a2d0275c74ffa09390a26a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image.c  .generated_files/flags/default/ad73710d19ba142ab9d2e1806a9ed6dab97f2aa0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ../src/config/default/gfx/legato/widget/image/legato_widget_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c  .generated_files/flags/default/d185055a5a8ec96cb751b0d2f7497658c0c9c4ab .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c  .generated_files/flags/default/485be164024d065ec5d1167859ede94933425d43 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c  .generated_files/flags/default/61bd367b35a4a490c4cdec02ce9492f0a9d1dbee .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c  .generated_files/flags/default/c547846f8b2d4ffad5a11e647f7d13eee4eb116d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c  .generated_files/flags/default/22a5a6408249430253270a1c5c8482360e4a3647 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c  .generated_files/flags/default/bea1418e5165e629135010eabb8f7b91e7b37cbc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c  .generated_files/flags/default/2cbfd5ec3730d496d60193444770fa8726d9dee2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c  .generated_files/flags/default/9ec23fff936f3a33582fe276d49fe51d579f3907 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label.c  .generated_files/flags/default/6881748c2cfb15a1c2cab08bc9442bdd2bf814f4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ../src/config/default/gfx/legato/widget/label/legato_widget_label.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c  .generated_files/flags/default/7cad87fd2733c799ce2342f5512b95f878e7bffc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line.c  .generated_files/flags/default/d9149714608141af1166dbae0c840530c8342240 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ../src/config/default/gfx/legato/widget/line/legato_widget_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c  .generated_files/flags/default/9c815a0b78ebc5dc16a78284114f8ef9cd9ea3cb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c  .generated_files/flags/default/34d695c988ee8a248e2c8da060bb03867dc7fa1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c  .generated_files/flags/default/7c8bcdd524dc2d4b04748daffc6fccb91a58eab1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list.c  .generated_files/flags/default/1b2f5e88c9ad96345d8620d4cb8e092deada2017 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ../src/config/default/gfx/legato/widget/list/legato_widget_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c  .generated_files/flags/default/8a542957444c2a66be12329b4ab651baf0522aa0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c  .generated_files/flags/default/d363a4d8dcb728ef907cc31deb2e150522ac421 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c  .generated_files/flags/default/154ca5d0476b598b90164436c3d0507de54d3df .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c  .generated_files/flags/default/545f527820bcfa5a2867f9ebcdbd683d56cda130 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c  .generated_files/flags/default/cfc7f044acc867d7b4cfb50fdff2041739a6dc1d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c  .generated_files/flags/default/56c2c00b58863ae13679209488e4c129cb455ed7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c  .generated_files/flags/default/73306839a03c927a369f8536be6e2d8913166d3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c  .generated_files/flags/default/7f29f5580fc0cd23116bbd1f2b929404cdc6d87e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c  .generated_files/flags/default/83c9f5ea574bf2d1e2b9b0d165aa4d5042a63159 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c  .generated_files/flags/default/28bb537c663c98c713e07b2555258cb43df04abe .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c  .generated_files/flags/default/74552a3e8d10accc85a18c0228a3ded9f9891a29 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c  .generated_files/flags/default/3cdc435016a9cd9e6771b13f6709bb4659404106 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c  .generated_files/flags/default/335043a5ac705002e7a206ebbad432cfd18443ed .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c  .generated_files/flags/default/7ef933a91d12b8ad9a5624a8fc3555c67a6a482b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c  .generated_files/flags/default/472a9380c84f154e16f2057a3d0a9824fcadf45e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c  .generated_files/flags/default/dea9d424c725baf8908f5df9b4e8feca5aa8bdee .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c  .generated_files/flags/default/18916313f333dd3ad8d62c112a586050e3e23714 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c  .generated_files/flags/default/a617ccc02195700255aa0535588f65f02929131b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c  .generated_files/flags/default/f41ae204bcc67abbe9a170d9ac3a52cf488e7a70 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c  .generated_files/flags/default/55050708fcdf22f647d648a18e8672c8110b1f69 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c  .generated_files/flags/default/bd8687eb8c9b0cd6cb2802c1cf6776c0180ffb87 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c  .generated_files/flags/default/ee8508d40df6e9960cd199672fcb586836c83139 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c  .generated_files/flags/default/116cd9af37649022fd37c7112e11b3e9426f0f9d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window.c  .generated_files/flags/default/aeac640224616635d3921a7fe7d2be5bf649d3df .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ../src/config/default/gfx/legato/widget/window/legato_widget_window.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c  .generated_files/flags/default/819abd3a919f1a9591d4966cafc4b4f51e99242a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c  .generated_files/flags/default/340e72ac2ad678124cff47616a03b168e7b59d1c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_editwidget.o: ../src/config/default/gfx/legato/widget/legato_editwidget.c  .generated_files/flags/default/8da1ee6cb99c90ddb32f230852be4c948e9bed98 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ../src/config/default/gfx/legato/widget/legato_editwidget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget.o: ../src/config/default/gfx/legato/widget/legato_widget.c  .generated_files/flags/default/92a955e02caa2141fcba2c4d4fdd797274de88e0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget.o ../src/config/default/gfx/legato/widget/legato_widget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c  .generated_files/flags/default/1e87ed6a1ac9338582349cb62be14545d41bcd5d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1777736013/gfx_simulator.o: ../src/config/default/gfx/simulator/gfx_simulator.c  .generated_files/flags/default/3433d33dc44ce58c4d88f5b1d97cddda3ac2c584 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1777736013" 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d" -o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ../src/config/default/gfx/simulator/gfx_simulator.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  .generated_files/flags/default/1de0e14a39afb891cd1ac6222644acbaea795196 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1865200349/plib_evic.o: ../src/config/default/peripheral/evic/plib_evic.c  .generated_files/flags/default/7dd6f8265d77260a67cf6f153648a698e9ccb792 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1865200349" 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" -o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ../src/config/default/peripheral/evic/plib_evic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1865254177/plib_gpio.o: ../src/config/default/peripheral/gpio/plib_gpio.c  .generated_files/flags/default/31cf3248dc0a805e7182842153cb120d796c0fd2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1865254177" 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ../src/config/default/peripheral/gpio/plib_gpio.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/default/321331ca403fde9970b018cca99f7b7e85bf3419 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input_listener.o: ../src/config/default/system/input/sys_input_listener.c  .generated_files/flags/default/e9a7ba2cf4fd4fddf29ee1b26f5ac9d73e807626 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ../src/config/default/system/input/sys_input_listener.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input.o: ../src/config/default/system/input/sys_input.c  .generated_files/flags/default/4dcf802cde0716d057fd6ff80874f5d0f478a5fe .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input.o ../src/config/default/system/input/sys_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/default/aa9d854d4995f7bd75294cbf332c0a4915b9ded6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/101884895/sys_time.o: ../src/config/default/system/time/src/sys_time.c  .generated_files/flags/default/db3d4a2a680663ed7ba2df4256acfa37c414e3ac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/101884895" 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o.d 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/101884895/sys_time.o.d" -o ${OBJECTDIR}/_ext/101884895/sys_time.o ../src/config/default/system/time/src/sys_time.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/default/d4ac216297476244b607298efda094fc40584239 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  .generated_files/flags/default/bb134fcfa1401208b6d3eb4a110a53c8eaf45af8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/default/7f299ae37c69a9e53ba4c652f3fff57d415b6afb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/default/52d3d636c44e9f20d09d0c39b9dd64cab29f83d5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/default/fdc62560fa991765ae5f5daacb571a3df35b2266 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/default/a92b2e9a7fb47fa9e1ffe61762007ec4fbfbf9d2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_SIMULATOR=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/_ext/1319235455/gfx_driver.o: ../src/config/default/gfx/driver/gfx_driver.c  .generated_files/flags/default/287f12dfd393065100d10f5cffc91273e1723c23 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1319235455" 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d" -o ${OBJECTDIR}/_ext/1319235455/gfx_driver.o ../src/config/default/gfx/driver/gfx_driver.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o: ../src/config/default/gfx/legato/common/legato_color_lerp.c  .generated_files/flags/default/3c0b43646fe4e9172610e0f16236b0f93eefd07a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ../src/config/default/gfx/legato/common/legato_color_lerp.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_utils.o: ../src/config/default/gfx/legato/common/legato_utils.c  .generated_files/flags/default/b1ca006f421f58849d323e96d4e0ff16140d082 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_utils.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ../src/config/default/gfx/legato/common/legato_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_error.o: ../src/config/default/gfx/legato/common/legato_error.c  .generated_files/flags/default/7397820149d77935a94b4e7f28d8dfc8a9458340 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_error.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_error.o ../src/config/default/gfx/legato/common/legato_error.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_math.o: ../src/config/default/gfx/legato/common/legato_math.c  .generated_files/flags/default/9b592bd7290757797e9079944cb696b004ebdd2d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_math.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_math.o ../src/config/default/gfx/legato/common/legato_math.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color.o: ../src/config/default/gfx/legato/common/legato_color.c  .generated_files/flags/default/e6026030f63fabf6872d2c60b558fac9aa285259 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color.o ../src/config/default/gfx/legato/common/legato_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_convert.o: ../src/config/default/gfx/legato/common/legato_color_convert.c  .generated_files/flags/default/1f45fe09cd9a9a32613a7a21b6d228b626771342 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ../src/config/default/gfx/legato/common/legato_color_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_blend.o: ../src/config/default/gfx/legato/common/legato_color_blend.c  .generated_files/flags/default/638d3d253b97ae2d77c119df453950f9435248e6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ../src/config/default/gfx/legato/common/legato_color_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_rect.o: ../src/config/default/gfx/legato/common/legato_rect.c  .generated_files/flags/default/87f559f3bd3bad49bc4b1d4efc73aaa885d8b535 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_rect.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ../src/config/default/gfx/legato/common/legato_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o: ../src/config/default/gfx/legato/common/legato_pixelbuffer.c  .generated_files/flags/default/4643ac7f8ed3f380ae4251476272dce476bda513 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ../src/config/default/gfx/legato/common/legato_pixelbuffer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_value.o: ../src/config/default/gfx/legato/common/legato_color_value.c  .generated_files/flags/default/263f734b6f809b68c1462bb59b651477ad69590a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ../src/config/default/gfx/legato/common/legato_color_value.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_input.o: ../src/config/default/gfx/legato/core/legato_input.c  .generated_files/flags/default/b820bd625e9e3a5e5f5c1da82b90f99399bf484f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_input.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_input.o ../src/config/default/gfx/legato/core/legato_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_scheme.o: ../src/config/default/gfx/legato/core/legato_scheme.c  .generated_files/flags/default/2627b0970f2284bbeddeeb613d881c9d2d2e44d2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_scheme.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ../src/config/default/gfx/legato/core/legato_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_event.o: ../src/config/default/gfx/legato/core/legato_event.c  .generated_files/flags/default/8de28d2b60952823ae38b2575c4661d0438e1ac2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_event.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_event.o ../src/config/default/gfx/legato/core/legato_event.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_stream.o: ../src/config/default/gfx/legato/core/legato_stream.c  .generated_files/flags/default/872f14d5cfce2cbe3c2ff09fd9629019bfe0e15b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_stream.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_stream.o ../src/config/default/gfx/legato/core/legato_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_state.o: ../src/config/default/gfx/legato/core/legato_state.c  .generated_files/flags/default/4b90b5188688f8c1dfa8f1c4c3f4cc5b81232877 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_state.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_state.o ../src/config/default/gfx/legato/core/legato_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_array.o: ../src/config/default/gfx/legato/datastructure/legato_array.c  .generated_files/flags/default/cf469201ae021a07d49aa691e014501454f9efe2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_array.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_array.o ../src/config/default/gfx/legato/datastructure/legato_array.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_list.o: ../src/config/default/gfx/legato/datastructure/legato_list.c  .generated_files/flags/default/19af93f4ddf42f068d2dc12746f4d7e158aea29a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_list.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_list.o ../src/config/default/gfx/legato/datastructure/legato_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_rectarray.o: ../src/config/default/gfx/legato/datastructure/legato_rectarray.c  .generated_files/flags/default/9ed0d5bf478af4793da21fcd55c9557fd1c9755e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ../src/config/default/gfx/legato/datastructure/legato_rectarray.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o: ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c  .generated_files/flags/default/9157ab009e29fb61e6cac9172ced93ca483c6a5d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c  .generated_files/flags/default/e248faea42a09a883dc66156f9ed5790df7e435d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c  .generated_files/flags/default/3c7398af6f49f53b757b4658e991156e659832c1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_font.o: ../src/config/default/gfx/legato/font/legato_font.c  .generated_files/flags/default/9c2e3c914752ba50e28266c5f4e66dc731176203 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_font.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_font.o ../src/config/default/gfx/legato/font/legato_font.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o: ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c  .generated_files/flags/default/fa5a447fa2cbf2a0997f39fe609c68d51d775d0b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1494086919" 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d" -o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/930643953/le_gen_images.o: ../src/config/default/gfx/legato/generated/image/le_gen_images.c  .generated_files/flags/default/acb1ee2906c9b129f52d62853e19858b8f1eb849 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/930643953" 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/930643953/le_gen_images.o.d" -o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ../src/config/default/gfx/legato/generated/image/le_gen_images.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c  .generated_files/flags/default/b29886147ba36fbb87908734c33a17b9497bd8d1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o: ../src/config/default/gfx/legato/generated/le_gen_harmony.c  .generated_files/flags/default/b00f84a23f707bc5c524dee0c43a7c4b3e03f889 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ../src/config/default/gfx/legato/generated/le_gen_harmony.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o: ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c  .generated_files/flags/default/82bd165e8390700d47d27283ee119260c8d8386b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_init.o: ../src/config/default/gfx/legato/generated/le_gen_init.c  .generated_files/flags/default/2d88ff64df3df307ab3619fb5246daa74a553674 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ../src/config/default/gfx/legato/generated/le_gen_init.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o: ../src/config/default/gfx/legato/generated/le_gen_stringtable.c  .generated_files/flags/default/57c2ae33f29a2bf92cc774d979c53a90ba41a783 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ../src/config/default/gfx/legato/generated/le_gen_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o: ../src/config/default/gfx/legato/generated/le_gen_scheme.c  .generated_files/flags/default/f2b3b15622fa9d8dd7742bc9821ccae2be69e7e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ../src/config/default/gfx/legato/generated/le_gen_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c  .generated_files/flags/default/a47b28fc35d049f6bdb469f68c3c9caf5827f4c2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/jidctint.o: ../src/config/default/gfx/legato/image/jpeg/jidctint.c  .generated_files/flags/default/638a8f90b6c6ec46bdbdba5a00d4d141f89fe0ff .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/jidctint.o.d" -o ${OBJECTDIR}/_ext/1395618758/jidctint.o ../src/config/default/gfx/legato/image/jpeg/jidctint.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c  .generated_files/flags/default/d6380416d91da6023030506860609e49e8505221 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c  .generated_files/flags/default/e320d587e1967b3f06df621f709e5b38fe392794 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c  .generated_files/flags/default/196235dab7c78e604a6e0c95cd87fc4f7dba4ee2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c  .generated_files/flags/default/e1d64f0c8000cb065598173b308088cb0731c8f8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o: ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c  .generated_files/flags/default/1ba0d0193f5fc926c7b8fa18cb4843ced0b3c44d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d" -o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/lodepng.o: ../src/config/default/gfx/legato/image/png/lodepng.c  .generated_files/flags/default/8e69c8b44511320d7f8528417aebdab9c56cd725 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/lodepng.o.d" -o ${OBJECTDIR}/_ext/460667659/lodepng.o ../src/config/default/gfx/legato/image/png/lodepng.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c  .generated_files/flags/default/cdb35e74029962ea75460f664338af3c2ba3cbaa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c  .generated_files/flags/default/2ec85fbb06f7417f5d98563646a2b912933e5fb9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c  .generated_files/flags/default/a9e6661df96a8f8a1ad3561fbd3f022e45dc77c6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c  .generated_files/flags/default/ece75d2968f5f75e58d876b1958ea43c8e12bcff .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c  .generated_files/flags/default/bc60cd8204e9368de8a12566767e39290101d914 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c  .generated_files/flags/default/751043f7b62a880e6c3abd8dc90263ddcf4cc27d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c  .generated_files/flags/default/27f3d9134f1e40ac8450ee767830cfe6d429fafc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c  .generated_files/flags/default/3d076e848486408b954540f9c5214778a860d3fa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c  .generated_files/flags/default/58f71e8528109126e617ea4273907a0c1ffc3b7f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c  .generated_files/flags/default/bfe32cfdea8f2f474b6233f7680500b04ba9f064 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c  .generated_files/flags/default/98dbbb6a45ab9a7ac7aba86586c3e23ddebc72d1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c  .generated_files/flags/default/1a119c5b89cd266829f3ca4b28392985d84ff067 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c  .generated_files/flags/default/6fad18c1eb9883a53442645749beb93358d17158 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c  .generated_files/flags/default/fc42d84e18a831fcc63314921cf2d3e30777baf9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c  .generated_files/flags/default/4ac4200859b375d020dc4d29d8b9499789b9f715 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_palette.o: ../src/config/default/gfx/legato/image/legato_palette.c  .generated_files/flags/default/293ce3e8f458a6708bbefa9ef7d9e3493d656fec .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_palette.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ../src/config/default/gfx/legato/image/legato_palette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image_utils.o: ../src/config/default/gfx/legato/image/legato_image_utils.c  .generated_files/flags/default/c57b1c563c2e0e619967c2e4dcdb00f0d3023785 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ../src/config/default/gfx/legato/image/legato_image_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image.o: ../src/config/default/gfx/legato/image/legato_image.c  .generated_files/flags/default/8cd41b6315b799033bd1833cae666c79ca521449 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image.o ../src/config/default/gfx/legato/image/legato_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o: ../src/config/default/gfx/legato/memory/legato_fixedheap.c  .generated_files/flags/default/4d88ed5e4e6f9f2588b1a3270a115eb3fee3fd8d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ../src/config/default/gfx/legato/memory/legato_fixedheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_memory.o: ../src/config/default/gfx/legato/memory/legato_memory.c  .generated_files/flags/default/b443889dc31966c142245f6969f01fa06404a835 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_memory.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ../src/config/default/gfx/legato/memory/legato_memory.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_variableheap.o: ../src/config/default/gfx/legato/memory/legato_variableheap.c  .generated_files/flags/default/72364320ded16e95191b02bdc11241cb05711364 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ../src/config/default/gfx/legato/memory/legato_variableheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw.o: ../src/config/default/gfx/legato/renderer/legato_draw.c  .generated_files/flags/default/3bd56a55de0d70a4bbaf96e55b1de0119bd6b89c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw.o ../src/config/default/gfx/legato/renderer/legato_draw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_gpu.o: ../src/config/default/gfx/legato/renderer/legato_gpu.c  .generated_files/flags/default/6eab4a769c30aebd734140d72455c2c0b9c1e3d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_gpu.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ../src/config/default/gfx/legato/renderer/legato_gpu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_arc.o: ../src/config/default/gfx/legato/renderer/legato_draw_arc.c  .generated_files/flags/default/433da337235d83b6a2543ff8dd6fa291a32f1a24 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ../src/config/default/gfx/legato/renderer/legato_draw_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_rect.o: ../src/config/default/gfx/legato/renderer/legato_draw_rect.c  .generated_files/flags/default/d7bab06e08892e641b688aaadfcb45e75fcfd65 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ../src/config/default/gfx/legato/renderer/legato_draw_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_renderer.o: ../src/config/default/gfx/legato/renderer/legato_renderer.c  .generated_files/flags/default/7560a5556bc25bb3450aa42947c79696d0655761 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_renderer.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ../src/config/default/gfx/legato/renderer/legato_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_line.o: ../src/config/default/gfx/legato/renderer/legato_draw_line.c  .generated_files/flags/default/b0ee36b4885f72029feecf8dfaecf28e6341912d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ../src/config/default/gfx/legato/renderer/legato_draw_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringtable.o: ../src/config/default/gfx/legato/string/legato_stringtable.c  .generated_files/flags/default/a082a56dfdefb1edbef146fa50259bafba28173d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ../src/config/default/gfx/legato/string/legato_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_tablestring.o: ../src/config/default/gfx/legato/string/legato_tablestring.c  .generated_files/flags/default/c4a3e522eb77a5d344988d4d6d3107889be339dc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ../src/config/default/gfx/legato/string/legato_tablestring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringutils.o: ../src/config/default/gfx/legato/string/legato_stringutils.c  .generated_files/flags/default/972b2e99355cd0cebf19f00278280ccb10bf6ab1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ../src/config/default/gfx/legato/string/legato_stringutils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o: ../src/config/default/gfx/legato/string/legato_dynamicstring.c  .generated_files/flags/default/e47efa2bfb9265d6f942ac412b222830667db371 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ../src/config/default/gfx/legato/string/legato_dynamicstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o: ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c  .generated_files/flags/default/e0947fd7a4dbd8917b2e6a05ededaa5ac57c3263 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string.o: ../src/config/default/gfx/legato/string/legato_string.c  .generated_files/flags/default/2c3388ba072d4b1412f1661f7ae0bc927fb17547 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string.o ../src/config/default/gfx/legato/string/legato_string.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o: ../src/config/default/gfx/legato/string/legato_string_renderer.c  .generated_files/flags/default/a198bc1375a7dbe3d449c665bbe763d227bd4456 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ../src/config/default/gfx/legato/string/legato_string_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o: ../src/config/default/gfx/legato/string/legato_fixedstring.c  .generated_files/flags/default/33a9d307b67bcb9dce2ab2fe77cc2f7c1d6e5168 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ../src/config/default/gfx/legato/string/legato_fixedstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c  .generated_files/flags/default/539705235f58c6e2ca9b96f9027ac331b209be46 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c  .generated_files/flags/default/272020a248d4f4a2f0b96f8b5205e4fe4830e246 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c  .generated_files/flags/default/dc286b665fe7f7b0d12291a3592b3aba4d577617 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c  .generated_files/flags/default/7087339c4de157113cc155260558710f446b8b4f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c  .generated_files/flags/default/15411172fcd14eeeff1023af29a1309131229c1a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button.c  .generated_files/flags/default/e9046a0b5f4faa7ff8322d039c2ab54325f162ee .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ../src/config/default/gfx/legato/widget/button/legato_widget_button.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c  .generated_files/flags/default/6d68b9022bc4504cc18a45701f33408691965624 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c  .generated_files/flags/default/c213512b472df8249adbb21d6cbcbc1d8f42e687 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c  .generated_files/flags/default/e665f0d28aafb464adae4d9d3057db364c2c2ad6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c  .generated_files/flags/default/7a9c8c4668031f99718be8aaad5d99aa7849240f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c  .generated_files/flags/default/655064cc8884dba1b5c936bb46d2e06b6be45301 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c  .generated_files/flags/default/2eed353962f98ba25adfcd10d93499ae1b5c0cff .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c  .generated_files/flags/default/2271a6c5dac442da43ae4c5aee53dfe1027ea963 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c  .generated_files/flags/default/c6d96468c32f6f7dff448e4d54aedc6d77d066c4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c  .generated_files/flags/default/e317b951b2037f7e6a60fd814e96a72d728fb154 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c  .generated_files/flags/default/e44a447368a8cedc4eba056444ac7004467a82ff .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c  .generated_files/flags/default/acc1dcfdd958a5f425fb1ff4ef4ee56a4a50cac1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c  .generated_files/flags/default/5512fb9ebc2d999eead505b30ee8b2ce33500b84 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c  .generated_files/flags/default/e1a4a683f8caae1038c24d2eb428c5258c9314bc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c  .generated_files/flags/default/7cc8d269da6e830df93e04a9e99eb0f5f0899aa8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c  .generated_files/flags/default/ae54a391f4b41a8ca08a3078ce62dc9dc1a4e8e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image.c  .generated_files/flags/default/3368fab88f84d4e904e61d4cccd2513b4c97ad20 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ../src/config/default/gfx/legato/widget/image/legato_widget_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c  .generated_files/flags/default/201b7fa1f8c261482d8bcfd97cde877da1a6dc8c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c  .generated_files/flags/default/590f8f94c929cd99f51046591a71153a9acb0a1f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c  .generated_files/flags/default/4d66e2ab242e11b4cf9c7826abd124452da1e7a1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c  .generated_files/flags/default/870476d2045c6f98f1d3411b960cbb2577eb3373 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c  .generated_files/flags/default/b7bed39820b76d41963551a87b29d4caf1fd8b8f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c  .generated_files/flags/default/b2cfea678cf951c8e8165e44cadc0d46c53b2f7a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c  .generated_files/flags/default/565d2955bb45e1d5b3bf80d28ee73bd620347bcf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c  .generated_files/flags/default/20f2646cbb1a5b4bf2ab60d1fccb54ddad13db71 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label.c  .generated_files/flags/default/17c1c38a99076ad7d83f6a5cbbc6245e73f600d5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ../src/config/default/gfx/legato/widget/label/legato_widget_label.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c  .generated_files/flags/default/c12b91488c3acae4054fdd2a43d9910325948f8b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line.c  .generated_files/flags/default/f89fe6cedaf153991de4e12245a99bed6a6b8e1a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ../src/config/default/gfx/legato/widget/line/legato_widget_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c  .generated_files/flags/default/458862195754c3544237f1b02ea14c2e3bffe444 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c  .generated_files/flags/default/fc87b2113cc9bc9bbd79eb112aca18258150d989 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c  .generated_files/flags/default/a9204b3d0b34df7f3e436d037d31041925e62865 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list.c  .generated_files/flags/default/969e0a5f24b646db32f9338dccb0e0af23ec61af .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ../src/config/default/gfx/legato/widget/list/legato_widget_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c  .generated_files/flags/default/d33c58843990c6b7ef629a8d0aa6b5bd0debbaa8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c  .generated_files/flags/default/2c11bdcb6e9e36161122d4c59e3c5cebd3ea041d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c  .generated_files/flags/default/a7fb0e0c0951869b901940e9a81ce0881747d04 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c  .generated_files/flags/default/2a3c882551b64129ca63e8aa47f6089f0b6874f9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c  .generated_files/flags/default/cfe8cf4b962662250caebf3a13ff3947baf09428 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c  .generated_files/flags/default/76b3adecc24adfb8560c1d7d0163031729fb54b6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c  .generated_files/flags/default/f3c1a6b339aeed91208dd7801faa583153ac5848 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c  .generated_files/flags/default/28106a365ecc100019f01a037d5ac2d3701c0421 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c  .generated_files/flags/default/bffeb617cf1c8fd35e3dbce469670e1745049262 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c  .generated_files/flags/default/21cd138fd05743c4c69304095a17f4feefd7de38 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c  .generated_files/flags/default/6e35c117a8076e327666b327c749485ddf2808 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c  .generated_files/flags/default/88df4996b8948126055d5067315649a2af569e1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c  .generated_files/flags/default/8c9390e9d791da0b4ab1b2facbb3780e82bab4a5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c  .generated_files/flags/default/ecf358c7eb918c8707cf6bb0d4fa7a0dd14c616e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c  .generated_files/flags/default/f50d36043c36e668c3cc42f0acacd2e6b50f1ad7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c  .generated_files/flags/default/c6cbbf46553c62b8b3f7bc5ffa947d805f80d900 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c  .generated_files/flags/default/45b0087b08da1919d6e22b40f1845d981d59e7d9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c  .generated_files/flags/default/301a1599a9a5aeb02d5e4f31e29b50b537e6dbf5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c  .generated_files/flags/default/ae820d54d1546551c89f19b29a225488aae9c03d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c  .generated_files/flags/default/e9656e0585197d3e3531412048d9a664b8dc1f2b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c  .generated_files/flags/default/5c01ce1e48c21dfed2834c470c64a97ef57b7a45 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c  .generated_files/flags/default/7c7580ded10b8f2b44837eda9eaada36a174a734 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c  .generated_files/flags/default/2c136c0203ad8b43d76f3985bf8cd56203552bfe .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window.c  .generated_files/flags/default/63246c437c2c7a2ee67873c7bc9e9f92ee2c9e1c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ../src/config/default/gfx/legato/widget/window/legato_widget_window.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c  .generated_files/flags/default/42132f264dbf51a9d958bab11a44e6a2f5ae9562 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c  .generated_files/flags/default/c9ce6822a84c9cab5b66d7cdfbbe2fae1d9c8d27 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_editwidget.o: ../src/config/default/gfx/legato/widget/legato_editwidget.c  .generated_files/flags/default/96efe427db7bb0dff61c1be5e2f82f0a89a56997 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ../src/config/default/gfx/legato/widget/legato_editwidget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget.o: ../src/config/default/gfx/legato/widget/legato_widget.c  .generated_files/flags/default/6c3473829c3ff01a3879200210c90f18eccefac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget.o ../src/config/default/gfx/legato/widget/legato_widget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c  .generated_files/flags/default/467092bd4eefbbb8d4ac979608000bb85b6d2e9f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1777736013/gfx_simulator.o: ../src/config/default/gfx/simulator/gfx_simulator.c  .generated_files/flags/default/101a7f93efe0c05420aec7a14407e75631eb2d9f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1777736013" 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d" -o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ../src/config/default/gfx/simulator/gfx_simulator.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  .generated_files/flags/default/bd613bbccb06a56a4a24145a8559a3559e89b71 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1865200349/plib_evic.o: ../src/config/default/peripheral/evic/plib_evic.c  .generated_files/flags/default/c6086dc795bc09e15d0b58b7a4c25859b8ddfa00 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1865200349" 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865200349/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865200349/plib_evic.o.d" -o ${OBJECTDIR}/_ext/1865200349/plib_evic.o ../src/config/default/peripheral/evic/plib_evic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1865254177/plib_gpio.o: ../src/config/default/peripheral/gpio/plib_gpio.c  .generated_files/flags/default/e871bd6852b68a76c16f11c3e533a858ba21bc40 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1865254177" 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/1865254177/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1865254177/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/1865254177/plib_gpio.o ../src/config/default/peripheral/gpio/plib_gpio.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/default/20e854390b964528ceb31151eeab79171f7d9cea .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input_listener.o: ../src/config/default/system/input/sys_input_listener.c  .generated_files/flags/default/d112fd3ca1b540d3c6947e3bfdf4e32497f88fbc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ../src/config/default/system/input/sys_input_listener.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input.o: ../src/config/default/system/input/sys_input.c  .generated_files/flags/default/12c95592a644c6a62f09da593166003d01b54e4c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input.o ../src/config/default/system/input/sys_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/default/4b0df7214df63d9ba921c83139bb36d9308218fe .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/101884895/sys_time.o: ../src/config/default/system/time/src/sys_time.c  .generated_files/flags/default/f902707012ae5ce02edb6cd5e44d800fc8cd0fa8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/101884895" 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o.d 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/101884895/sys_time.o.d" -o ${OBJECTDIR}/_ext/101884895/sys_time.o ../src/config/default/system/time/src/sys_time.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/default/af23c7a3002042082b53cfc99329c214fc86cfb5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/exceptions.o: ../src/config/default/exceptions.c  .generated_files/flags/default/285fc3114234f4365668672cbda02698671f2bdf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/exceptions.o.d" -o ${OBJECTDIR}/_ext/1171490990/exceptions.o ../src/config/default/exceptions.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/default/a7c9f96d36035260b1e8eb4afa1fdf64a58277a3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/default/6b4af70915af06eb3f3733f16fd6468641a52cb1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/default/ea52d9cb670b18137b6d6bfecdb2ad8070b31ae6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/default/74f438838cd4e6b933e6dd78d2867b502e02af03 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../src/config/default/p32MZ2064DAR176.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_SIMULATOR=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)      -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_SIMULATOR=1,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../src/config/default/p32MZ2064DAR176.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}\\xc32-bin2hex ${DISTDIR}/GFX_Sim_ImageSequence.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
