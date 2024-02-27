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
FINAL_IMAGE=${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
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
SOURCEFILES_QUOTED_IF_SPACED=../src/config/default/gfx/driver/gfx_driver.c ../src/config/default/gfx/legato/common/legato_color.c ../src/config/default/gfx/legato/common/legato_math.c ../src/config/default/gfx/legato/common/legato_rect.c ../src/config/default/gfx/legato/common/legato_color_lerp.c ../src/config/default/gfx/legato/common/legato_utils.c ../src/config/default/gfx/legato/common/legato_color_value.c ../src/config/default/gfx/legato/common/legato_color_blend.c ../src/config/default/gfx/legato/common/legato_error.c ../src/config/default/gfx/legato/common/legato_pixelbuffer.c ../src/config/default/gfx/legato/common/legato_color_convert.c ../src/config/default/gfx/legato/core/legato_stream.c ../src/config/default/gfx/legato/core/legato_event.c ../src/config/default/gfx/legato/core/legato_scheme.c ../src/config/default/gfx/legato/core/legato_input.c ../src/config/default/gfx/legato/core/legato_state.c ../src/config/default/gfx/legato/datastructure/legato_array.c ../src/config/default/gfx/legato/datastructure/legato_rectarray.c ../src/config/default/gfx/legato/datastructure/legato_list.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c ../src/config/default/gfx/legato/font/legato_font.c ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c ../src/config/default/gfx/legato/generated/image/le_gen_images.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c ../src/config/default/gfx/legato/generated/le_gen_stringtable.c ../src/config/default/gfx/legato/generated/le_gen_harmony.c ../src/config/default/gfx/legato/generated/le_gen_init.c ../src/config/default/gfx/legato/generated/le_gen_scheme.c ../src/config/default/gfx/legato/image/jpeg/jidctint.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c ../src/config/default/gfx/legato/image/png/lodepng.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c ../src/config/default/gfx/legato/image/legato_image.c ../src/config/default/gfx/legato/image/legato_palette.c ../src/config/default/gfx/legato/image/legato_image_utils.c ../src/config/default/gfx/legato/memory/legato_memory.c ../src/config/default/gfx/legato/memory/legato_fixedheap.c ../src/config/default/gfx/legato/memory/legato_variableheap.c ../src/config/default/gfx/legato/renderer/legato_draw_line.c ../src/config/default/gfx/legato/renderer/legato_draw_rect.c ../src/config/default/gfx/legato/renderer/legato_draw_arc.c ../src/config/default/gfx/legato/renderer/legato_renderer.c ../src/config/default/gfx/legato/renderer/legato_draw.c ../src/config/default/gfx/legato/renderer/legato_gpu.c ../src/config/default/gfx/legato/string/legato_stringtable.c ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c ../src/config/default/gfx/legato/string/legato_fixedstring.c ../src/config/default/gfx/legato/string/legato_dynamicstring.c ../src/config/default/gfx/legato/string/legato_string_renderer.c ../src/config/default/gfx/legato/string/legato_stringutils.c ../src/config/default/gfx/legato/string/legato_tablestring.c ../src/config/default/gfx/legato/string/legato_string.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c ../src/config/default/gfx/legato/widget/button/legato_widget_button.c ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c ../src/config/default/gfx/legato/widget/image/legato_widget_image.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label.c ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c ../src/config/default/gfx/legato/widget/line/legato_widget_line.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c ../src/config/default/gfx/legato/widget/list/legato_widget_list.c ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c ../src/config/default/gfx/legato/widget/legato_editwidget.c ../src/config/default/gfx/legato/widget/legato_widget.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c ../src/config/default/gfx/simulator/gfx_simulator.c ../src/config/default/peripheral/aic/plib_aic.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/mmu/plib_mmu.c ../src/config/default/peripheral/pio/plib_pio.c ../src/config/default/peripheral/pit/plib_pit.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/cache/sys_cache.c ../src/config/default/system/input/sys_input_listener.c ../src/config/default/system/input/sys_input.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/system/time/src/sys_time.c ../src/config/default/fault_handlers.c ../src/config/default/cstartup.S ../src/config/default/interrupts.c ../src/config/default/tasks.c ../src/config/default/initialization.c ../src/main.c ../src/app.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1319235455/gfx_driver.o ${OBJECTDIR}/_ext/1510041067/legato_color.o ${OBJECTDIR}/_ext/1510041067/legato_math.o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ${OBJECTDIR}/_ext/1510041067/legato_error.o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ${OBJECTDIR}/_ext/92283465/legato_stream.o ${OBJECTDIR}/_ext/92283465/legato_event.o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ${OBJECTDIR}/_ext/92283465/legato_input.o ${OBJECTDIR}/_ext/92283465/legato_state.o ${OBJECTDIR}/_ext/2021927327/legato_array.o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ${OBJECTDIR}/_ext/2021927327/legato_list.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ${OBJECTDIR}/_ext/92372729/legato_font.o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ${OBJECTDIR}/_ext/1395618758/jidctint.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ${OBJECTDIR}/_ext/460667659/lodepng.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ${OBJECTDIR}/_ext/1428714511/legato_image.o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ${OBJECTDIR}/_ext/656756333/legato_draw.o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ${OBJECTDIR}/_ext/1047211973/legato_string.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ${OBJECTDIR}/_ext/943273362/legato_widget.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ${OBJECTDIR}/_ext/60163497/plib_aic.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/60175171/plib_mmu.o ${OBJECTDIR}/_ext/60177924/plib_pio.o ${OBJECTDIR}/_ext/60177929/plib_pit.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ${OBJECTDIR}/_ext/1008098389/sys_input.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/101884895/sys_time.o ${OBJECTDIR}/_ext/1171490990/fault_handlers.o ${OBJECTDIR}/_ext/1171490990/cstartup.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d ${OBJECTDIR}/_ext/1510041067/legato_color.o.d ${OBJECTDIR}/_ext/1510041067/legato_math.o.d ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d ${OBJECTDIR}/_ext/1510041067/legato_error.o.d ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d ${OBJECTDIR}/_ext/92283465/legato_stream.o.d ${OBJECTDIR}/_ext/92283465/legato_event.o.d ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d ${OBJECTDIR}/_ext/92283465/legato_input.o.d ${OBJECTDIR}/_ext/92283465/legato_state.o.d ${OBJECTDIR}/_ext/2021927327/legato_array.o.d ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d ${OBJECTDIR}/_ext/2021927327/legato_list.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d ${OBJECTDIR}/_ext/92372729/legato_font.o.d ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o.d ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d ${OBJECTDIR}/_ext/1395618758/jidctint.o.d ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d ${OBJECTDIR}/_ext/460667659/lodepng.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d ${OBJECTDIR}/_ext/1428714511/legato_image.o.d ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d ${OBJECTDIR}/_ext/656756333/legato_draw.o.d ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d ${OBJECTDIR}/_ext/1047211973/legato_string.o.d ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d ${OBJECTDIR}/_ext/943273362/legato_widget.o.d ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d ${OBJECTDIR}/_ext/60163497/plib_aic.o.d ${OBJECTDIR}/_ext/60165520/plib_clk.o.d ${OBJECTDIR}/_ext/60175171/plib_mmu.o.d ${OBJECTDIR}/_ext/60177924/plib_pio.o.d ${OBJECTDIR}/_ext/60177929/plib_pit.o.d ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d ${OBJECTDIR}/_ext/1008098389/sys_input.o.d ${OBJECTDIR}/_ext/1881668453/sys_int.o.d ${OBJECTDIR}/_ext/101884895/sys_time.o.d ${OBJECTDIR}/_ext/1171490990/fault_handlers.o.d ${OBJECTDIR}/_ext/1171490990/cstartup.o.d ${OBJECTDIR}/_ext/1171490990/interrupts.o.d ${OBJECTDIR}/_ext/1171490990/tasks.o.d ${OBJECTDIR}/_ext/1171490990/initialization.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/app.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1319235455/gfx_driver.o ${OBJECTDIR}/_ext/1510041067/legato_color.o ${OBJECTDIR}/_ext/1510041067/legato_math.o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ${OBJECTDIR}/_ext/1510041067/legato_error.o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ${OBJECTDIR}/_ext/92283465/legato_stream.o ${OBJECTDIR}/_ext/92283465/legato_event.o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ${OBJECTDIR}/_ext/92283465/legato_input.o ${OBJECTDIR}/_ext/92283465/legato_state.o ${OBJECTDIR}/_ext/2021927327/legato_array.o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ${OBJECTDIR}/_ext/2021927327/legato_list.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ${OBJECTDIR}/_ext/92372729/legato_font.o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ${OBJECTDIR}/_ext/1395618758/jidctint.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ${OBJECTDIR}/_ext/460667659/lodepng.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ${OBJECTDIR}/_ext/1428714511/legato_image.o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ${OBJECTDIR}/_ext/656756333/legato_draw.o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ${OBJECTDIR}/_ext/1047211973/legato_string.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ${OBJECTDIR}/_ext/943273362/legato_widget.o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ${OBJECTDIR}/_ext/60163497/plib_aic.o ${OBJECTDIR}/_ext/60165520/plib_clk.o ${OBJECTDIR}/_ext/60175171/plib_mmu.o ${OBJECTDIR}/_ext/60177924/plib_pio.o ${OBJECTDIR}/_ext/60177929/plib_pit.o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ${OBJECTDIR}/_ext/1008098389/sys_input.o ${OBJECTDIR}/_ext/1881668453/sys_int.o ${OBJECTDIR}/_ext/101884895/sys_time.o ${OBJECTDIR}/_ext/1171490990/fault_handlers.o ${OBJECTDIR}/_ext/1171490990/cstartup.o ${OBJECTDIR}/_ext/1171490990/interrupts.o ${OBJECTDIR}/_ext/1171490990/tasks.o ${OBJECTDIR}/_ext/1171490990/initialization.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app.o

# Source Files
SOURCEFILES=../src/config/default/gfx/driver/gfx_driver.c ../src/config/default/gfx/legato/common/legato_color.c ../src/config/default/gfx/legato/common/legato_math.c ../src/config/default/gfx/legato/common/legato_rect.c ../src/config/default/gfx/legato/common/legato_color_lerp.c ../src/config/default/gfx/legato/common/legato_utils.c ../src/config/default/gfx/legato/common/legato_color_value.c ../src/config/default/gfx/legato/common/legato_color_blend.c ../src/config/default/gfx/legato/common/legato_error.c ../src/config/default/gfx/legato/common/legato_pixelbuffer.c ../src/config/default/gfx/legato/common/legato_color_convert.c ../src/config/default/gfx/legato/core/legato_stream.c ../src/config/default/gfx/legato/core/legato_event.c ../src/config/default/gfx/legato/core/legato_scheme.c ../src/config/default/gfx/legato/core/legato_input.c ../src/config/default/gfx/legato/core/legato_state.c ../src/config/default/gfx/legato/datastructure/legato_array.c ../src/config/default/gfx/legato/datastructure/legato_rectarray.c ../src/config/default/gfx/legato/datastructure/legato_list.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c ../src/config/default/gfx/legato/font/legato_font.c ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c ../src/config/default/gfx/legato/generated/image/le_gen_images.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c ../src/config/default/gfx/legato/generated/le_gen_stringtable.c ../src/config/default/gfx/legato/generated/le_gen_harmony.c ../src/config/default/gfx/legato/generated/le_gen_init.c ../src/config/default/gfx/legato/generated/le_gen_scheme.c ../src/config/default/gfx/legato/image/jpeg/jidctint.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c ../src/config/default/gfx/legato/image/png/lodepng.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c ../src/config/default/gfx/legato/image/legato_image.c ../src/config/default/gfx/legato/image/legato_palette.c ../src/config/default/gfx/legato/image/legato_image_utils.c ../src/config/default/gfx/legato/memory/legato_memory.c ../src/config/default/gfx/legato/memory/legato_fixedheap.c ../src/config/default/gfx/legato/memory/legato_variableheap.c ../src/config/default/gfx/legato/renderer/legato_draw_line.c ../src/config/default/gfx/legato/renderer/legato_draw_rect.c ../src/config/default/gfx/legato/renderer/legato_draw_arc.c ../src/config/default/gfx/legato/renderer/legato_renderer.c ../src/config/default/gfx/legato/renderer/legato_draw.c ../src/config/default/gfx/legato/renderer/legato_gpu.c ../src/config/default/gfx/legato/string/legato_stringtable.c ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c ../src/config/default/gfx/legato/string/legato_fixedstring.c ../src/config/default/gfx/legato/string/legato_dynamicstring.c ../src/config/default/gfx/legato/string/legato_string_renderer.c ../src/config/default/gfx/legato/string/legato_stringutils.c ../src/config/default/gfx/legato/string/legato_tablestring.c ../src/config/default/gfx/legato/string/legato_string.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c ../src/config/default/gfx/legato/widget/button/legato_widget_button.c ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c ../src/config/default/gfx/legato/widget/image/legato_widget_image.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c ../src/config/default/gfx/legato/widget/label/legato_widget_label.c ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c ../src/config/default/gfx/legato/widget/line/legato_widget_line.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c ../src/config/default/gfx/legato/widget/list/legato_widget_list.c ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c ../src/config/default/gfx/legato/widget/window/legato_widget_window.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c ../src/config/default/gfx/legato/widget/legato_editwidget.c ../src/config/default/gfx/legato/widget/legato_widget.c ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c ../src/config/default/gfx/simulator/gfx_simulator.c ../src/config/default/peripheral/aic/plib_aic.c ../src/config/default/peripheral/clk/plib_clk.c ../src/config/default/peripheral/mmu/plib_mmu.c ../src/config/default/peripheral/pio/plib_pio.c ../src/config/default/peripheral/pit/plib_pit.c ../src/config/default/stdio/xc32_monitor.c ../src/config/default/system/cache/sys_cache.c ../src/config/default/system/input/sys_input_listener.c ../src/config/default/system/input/sys_input.c ../src/config/default/system/int/src/sys_int.c ../src/config/default/system/time/src/sys_time.c ../src/config/default/fault_handlers.c ../src/config/default/cstartup.S ../src/config/default/interrupts.c ../src/config/default/tasks.c ../src/config/default/initialization.c ../src/main.c ../src/app.c



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
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=SAM9X75
MP_LINKER_FILE_OPTION=,--script="..\src\config\default\ddram.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1171490990/cstartup.o: ../src/config/default/cstartup.S  .generated_files/flags/default/a5f54af92a52e59e730b54d66ac02576303d8740 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o.ok ${OBJECTDIR}/_ext/1171490990/cstartup.o.err 
	${MP_CC} $(MP_EXTRA_AS_PRE)  -D__DEBUG  -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1171490990/cstartup.o.d"  -o ${OBJECTDIR}/_ext/1171490990/cstartup.o ../src/config/default/cstartup.S  -DXPRJ_default=$(CND_CONF)    -Wa,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_AS_POST),-MD="${OBJECTDIR}/_ext/1171490990/cstartup.o.asm.d",--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--gdwarf-2,--defsym=__DEBUG=1 -mdfp="${DFP_DIR}"
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/cstartup.o.d" "${OBJECTDIR}/_ext/1171490990/cstartup.o.asm.d" -t $(SILENT) -rsi ${MP_CC_DIR}../ 
	
else
${OBJECTDIR}/_ext/1171490990/cstartup.o: ../src/config/default/cstartup.S  .generated_files/flags/default/d4457daa1e10f8fe8575cc670c32de96bd5561cf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o 
	@${RM} ${OBJECTDIR}/_ext/1171490990/cstartup.o.ok ${OBJECTDIR}/_ext/1171490990/cstartup.o.err 
	${MP_CC} $(MP_EXTRA_AS_PRE)  -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1171490990/cstartup.o.d"  -o ${OBJECTDIR}/_ext/1171490990/cstartup.o ../src/config/default/cstartup.S  -DXPRJ_default=$(CND_CONF)    -Wa,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_AS_POST),-MD="${OBJECTDIR}/_ext/1171490990/cstartup.o.asm.d",--gdwarf-2 -mdfp="${DFP_DIR}"
	@${FIXDEPS} "${OBJECTDIR}/_ext/1171490990/cstartup.o.d" "${OBJECTDIR}/_ext/1171490990/cstartup.o.asm.d" -t $(SILENT) -rsi ${MP_CC_DIR}../ 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1319235455/gfx_driver.o: ../src/config/default/gfx/driver/gfx_driver.c  .generated_files/flags/default/17e4e803eaa312a86d83585a93fa0ccf12691810 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1319235455" 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d" -o ${OBJECTDIR}/_ext/1319235455/gfx_driver.o ../src/config/default/gfx/driver/gfx_driver.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color.o: ../src/config/default/gfx/legato/common/legato_color.c  .generated_files/flags/default/24ef6a33fefeceee0dd0ec0c73b8e16c9349bc07 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color.o ../src/config/default/gfx/legato/common/legato_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_math.o: ../src/config/default/gfx/legato/common/legato_math.c  .generated_files/flags/default/de0a21058b23e07a5ab1096c2c7a10178a1b3065 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_math.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_math.o ../src/config/default/gfx/legato/common/legato_math.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_rect.o: ../src/config/default/gfx/legato/common/legato_rect.c  .generated_files/flags/default/8b81df187c8e47dd8e9fc2ee4e0ee88038efb0ad .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_rect.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ../src/config/default/gfx/legato/common/legato_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o: ../src/config/default/gfx/legato/common/legato_color_lerp.c  .generated_files/flags/default/8b61cf7cee0030e8b20728f81ff728f01155ab51 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ../src/config/default/gfx/legato/common/legato_color_lerp.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_utils.o: ../src/config/default/gfx/legato/common/legato_utils.c  .generated_files/flags/default/a2ada5eafe6dc28eec06be5577360ad948f1cf33 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_utils.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ../src/config/default/gfx/legato/common/legato_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_value.o: ../src/config/default/gfx/legato/common/legato_color_value.c  .generated_files/flags/default/3888d312f2047d4fa190e3ee2bbe56658b81918e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ../src/config/default/gfx/legato/common/legato_color_value.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_blend.o: ../src/config/default/gfx/legato/common/legato_color_blend.c  .generated_files/flags/default/8acc2f7394488e4ffa4975dd5c74246c58411640 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ../src/config/default/gfx/legato/common/legato_color_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_error.o: ../src/config/default/gfx/legato/common/legato_error.c  .generated_files/flags/default/93731cd896b5b2b450d3bf58795ae0c4c3004414 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_error.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_error.o ../src/config/default/gfx/legato/common/legato_error.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o: ../src/config/default/gfx/legato/common/legato_pixelbuffer.c  .generated_files/flags/default/423d7dc833c22017428ac906df784e5a233c7c4a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ../src/config/default/gfx/legato/common/legato_pixelbuffer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_convert.o: ../src/config/default/gfx/legato/common/legato_color_convert.c  .generated_files/flags/default/2ce50886263f928ac867034e9fa871917b3459c4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ../src/config/default/gfx/legato/common/legato_color_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_stream.o: ../src/config/default/gfx/legato/core/legato_stream.c  .generated_files/flags/default/84f19a09244fe66d5ac0e65d34f8dfa6d2b3ce81 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_stream.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_stream.o ../src/config/default/gfx/legato/core/legato_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_event.o: ../src/config/default/gfx/legato/core/legato_event.c  .generated_files/flags/default/8cbf7ab35beafaf662531a481d88b50507763aae .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_event.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_event.o ../src/config/default/gfx/legato/core/legato_event.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_scheme.o: ../src/config/default/gfx/legato/core/legato_scheme.c  .generated_files/flags/default/704648bb3f9b9723bec274de10353ef7ea9dd986 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_scheme.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ../src/config/default/gfx/legato/core/legato_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_input.o: ../src/config/default/gfx/legato/core/legato_input.c  .generated_files/flags/default/4e974dcba9f786ebb02b26df86c38906d1416927 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_input.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_input.o ../src/config/default/gfx/legato/core/legato_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_state.o: ../src/config/default/gfx/legato/core/legato_state.c  .generated_files/flags/default/d3a54ce1312f72f5993a9d3d63ea6f56b1d50085 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_state.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_state.o ../src/config/default/gfx/legato/core/legato_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_array.o: ../src/config/default/gfx/legato/datastructure/legato_array.c  .generated_files/flags/default/4e645f3034e1de12d05b53c05d1ae7bdbff53bee .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_array.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_array.o ../src/config/default/gfx/legato/datastructure/legato_array.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_rectarray.o: ../src/config/default/gfx/legato/datastructure/legato_rectarray.c  .generated_files/flags/default/90a1c0b4ff1de6e1261937caec7e388342931083 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ../src/config/default/gfx/legato/datastructure/legato_rectarray.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_list.o: ../src/config/default/gfx/legato/datastructure/legato_list.c  .generated_files/flags/default/92dd213eadde45adc86f1073ff33003e4d281e0d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_list.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_list.o ../src/config/default/gfx/legato/datastructure/legato_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c  .generated_files/flags/default/eaf242f190ee2771d1f368622caa8dd784195cc2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c  .generated_files/flags/default/57fd4e3b979e73e5163456cd33117fcc9395ca11 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o: ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c  .generated_files/flags/default/b74cecc51c4bed6f681a14b24a299940787baa82 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_font.o: ../src/config/default/gfx/legato/font/legato_font.c  .generated_files/flags/default/3937aab9496dd8bc5892f9bbe599713d964946e2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_font.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_font.o ../src/config/default/gfx/legato/font/legato_font.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o: ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c  .generated_files/flags/default/fc5374cbf3a6e4a1f8e4b2824484dfaf61d01672 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1494086919" 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d" -o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/930643953/le_gen_images.o: ../src/config/default/gfx/legato/generated/image/le_gen_images.c  .generated_files/flags/default/ab59c4471fff43e828dade0d0319427403f25874 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/930643953" 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/930643953/le_gen_images.o.d" -o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ../src/config/default/gfx/legato/generated/image/le_gen_images.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c  .generated_files/flags/default/66fc9f87c3c0113a670491a54171ad87f57d960c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c  .generated_files/flags/default/1055d7874664c17e4aa479c5b68b1197a54d9b6b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o: ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c  .generated_files/flags/default/6016fb3d3ab23f30febdc639c826c232cfaadec8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o: ../src/config/default/gfx/legato/generated/le_gen_stringtable.c  .generated_files/flags/default/40c802f606a28c93486fcd1f73eabcdeb7953318 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ../src/config/default/gfx/legato/generated/le_gen_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o: ../src/config/default/gfx/legato/generated/le_gen_harmony.c  .generated_files/flags/default/1d6d9b6ce3ba0d1a292884e8d0b277043e92a71b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ../src/config/default/gfx/legato/generated/le_gen_harmony.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_init.o: ../src/config/default/gfx/legato/generated/le_gen_init.c  .generated_files/flags/default/506bc01431c6b7906778768bb7b3084ad4a107e9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ../src/config/default/gfx/legato/generated/le_gen_init.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o: ../src/config/default/gfx/legato/generated/le_gen_scheme.c  .generated_files/flags/default/df8303636b4ce837e6a848d31f02d26ef6428d84 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ../src/config/default/gfx/legato/generated/le_gen_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/jidctint.o: ../src/config/default/gfx/legato/image/jpeg/jidctint.c  .generated_files/flags/default/40654b2bf73814a8649a35c0535a311c99b76926 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/jidctint.o.d" -o ${OBJECTDIR}/_ext/1395618758/jidctint.o ../src/config/default/gfx/legato/image/jpeg/jidctint.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c  .generated_files/flags/default/dc18a4bc7738a6cfac2aacc87fc2bb00c5163fdb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c  .generated_files/flags/default/eec27d48ed942c3a38f97b7901ff6f5bf2443cd2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c  .generated_files/flags/default/486964c111afa5dbdbc9c54f827e3c266d76b28b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c  .generated_files/flags/default/21e935d2d862fe3df6438e37705617b0fd862963 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c  .generated_files/flags/default/858d4d73856a7bd09005d5b24da3035974ec67f9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o: ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c  .generated_files/flags/default/f516d318dcc707dd0b34fa0cae4fa15abb1a6730 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d" -o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/lodepng.o: ../src/config/default/gfx/legato/image/png/lodepng.c  .generated_files/flags/default/475696d697abb489b570a2d770cb9614a1ed40d2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/lodepng.o.d" -o ${OBJECTDIR}/_ext/460667659/lodepng.o ../src/config/default/gfx/legato/image/png/lodepng.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c  .generated_files/flags/default/78c979c3e87a8914ed63afcf98e92e9c5014b869 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c  .generated_files/flags/default/d403d5f3b47cfc9a8f425954837c88c00b696e3a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c  .generated_files/flags/default/67b5e403c363e5f02739647a0df0fd2c7689105b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c  .generated_files/flags/default/d6ef796fa11ed61882173ce49e91ce5c195cedc9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c  .generated_files/flags/default/888dd2368d5be4da8f50cb0ec1b7bfac20da19f9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c  .generated_files/flags/default/847bcd0a76f123e6dc4e58f83d8e8472bc861b90 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c  .generated_files/flags/default/5cd8c4930df6aff9100872131a4dc9f85d231121 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c  .generated_files/flags/default/383c63a5c6aa853f0d4b12f3e6b94275b28190 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c  .generated_files/flags/default/e55ea2ade49e02e8b5ae307b6e02ab4e58541cc6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c  .generated_files/flags/default/dc76db2e9a2e44901bf46776e6561f5c42a76b3e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c  .generated_files/flags/default/80c43ab06669f5cc45cacf753a1d9205b7cd09b7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c  .generated_files/flags/default/e986bc02ee65e2bc91819339c0383af348b7e784 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c  .generated_files/flags/default/edbf59268e3cf486712c2d859855fc485f69794b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c  .generated_files/flags/default/dd4ae2722c047ee45245607787c2e24c60371dd1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c  .generated_files/flags/default/cd0a0e5d5af0eb88a2dd87cbd90c2f958f941e9e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image.o: ../src/config/default/gfx/legato/image/legato_image.c  .generated_files/flags/default/9e8643b086ee17513d16a665a7d8a9e94a4c58fb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image.o ../src/config/default/gfx/legato/image/legato_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_palette.o: ../src/config/default/gfx/legato/image/legato_palette.c  .generated_files/flags/default/950b7fb51852f3fa8e934881f74dc156606bb77a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_palette.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ../src/config/default/gfx/legato/image/legato_palette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image_utils.o: ../src/config/default/gfx/legato/image/legato_image_utils.c  .generated_files/flags/default/397d196abb80474e7be4fd17b03313ea8560b1ce .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ../src/config/default/gfx/legato/image/legato_image_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_memory.o: ../src/config/default/gfx/legato/memory/legato_memory.c  .generated_files/flags/default/b1756df8599d2971652a9aaeab2cdd521456a468 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_memory.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ../src/config/default/gfx/legato/memory/legato_memory.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o: ../src/config/default/gfx/legato/memory/legato_fixedheap.c  .generated_files/flags/default/81192ee3d9ee616a2765af773a4dfc014ea0ccbf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ../src/config/default/gfx/legato/memory/legato_fixedheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_variableheap.o: ../src/config/default/gfx/legato/memory/legato_variableheap.c  .generated_files/flags/default/101cde14b23b29b02bca774053e9c70b04c3c207 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ../src/config/default/gfx/legato/memory/legato_variableheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_line.o: ../src/config/default/gfx/legato/renderer/legato_draw_line.c  .generated_files/flags/default/3b433a06d4a1f2b6a25135c1102c0e09260a40e2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ../src/config/default/gfx/legato/renderer/legato_draw_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_rect.o: ../src/config/default/gfx/legato/renderer/legato_draw_rect.c  .generated_files/flags/default/cc0ed4917b88f13e408cc07b1533657eacc3f973 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ../src/config/default/gfx/legato/renderer/legato_draw_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_arc.o: ../src/config/default/gfx/legato/renderer/legato_draw_arc.c  .generated_files/flags/default/546f65c941fd8a73e3d0d3409e0db43c76fc1be6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ../src/config/default/gfx/legato/renderer/legato_draw_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_renderer.o: ../src/config/default/gfx/legato/renderer/legato_renderer.c  .generated_files/flags/default/e4acf9e8c919fa11be12d67003be49c7b5be9f84 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_renderer.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ../src/config/default/gfx/legato/renderer/legato_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw.o: ../src/config/default/gfx/legato/renderer/legato_draw.c  .generated_files/flags/default/8ae5d09691a4b8f48372fc5d6b83579d3b54deb4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw.o ../src/config/default/gfx/legato/renderer/legato_draw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_gpu.o: ../src/config/default/gfx/legato/renderer/legato_gpu.c  .generated_files/flags/default/bc2a9100fdfc4ccf57229f51d9e8d2edeb5ebcd8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_gpu.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ../src/config/default/gfx/legato/renderer/legato_gpu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringtable.o: ../src/config/default/gfx/legato/string/legato_stringtable.c  .generated_files/flags/default/d6e86a2738db6aeeee7d0db2eadb400e18fb3afd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ../src/config/default/gfx/legato/string/legato_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o: ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c  .generated_files/flags/default/f07776a9d908054fc936215f0f2e4abc33e92ab5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o: ../src/config/default/gfx/legato/string/legato_fixedstring.c  .generated_files/flags/default/4824ae85e32a57413db1a1e322b77977de186c6c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ../src/config/default/gfx/legato/string/legato_fixedstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o: ../src/config/default/gfx/legato/string/legato_dynamicstring.c  .generated_files/flags/default/c95169eb6a6a447229824d2a7ebc303e5695efeb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ../src/config/default/gfx/legato/string/legato_dynamicstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o: ../src/config/default/gfx/legato/string/legato_string_renderer.c  .generated_files/flags/default/b4529ffd51ef606234c4e6926edc71916cac9c74 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ../src/config/default/gfx/legato/string/legato_string_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringutils.o: ../src/config/default/gfx/legato/string/legato_stringutils.c  .generated_files/flags/default/27948780274f7663dad641889442e5c75dce3ecb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ../src/config/default/gfx/legato/string/legato_stringutils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_tablestring.o: ../src/config/default/gfx/legato/string/legato_tablestring.c  .generated_files/flags/default/1e7ab87434c5cc0a78b473247dfe80baf4701174 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ../src/config/default/gfx/legato/string/legato_tablestring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string.o: ../src/config/default/gfx/legato/string/legato_string.c  .generated_files/flags/default/490b36ff3d685b320f56c0765be58e4daaed58af .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string.o ../src/config/default/gfx/legato/string/legato_string.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c  .generated_files/flags/default/7a719002a87de3d4cb7bd42db974badb01854b93 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c  .generated_files/flags/default/7967441fb929d5acad4f4b9e21337f7e7748cf88 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c  .generated_files/flags/default/367bc1099ba9313cb206d6cb504f7e54ca064a4a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c  .generated_files/flags/default/57e7cb149b0e03b74dc47afc6b634e4af2e7c18 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button.c  .generated_files/flags/default/7e4f7a448c5d4fb61faa682d8bdb7535e9027996 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ../src/config/default/gfx/legato/widget/button/legato_widget_button.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c  .generated_files/flags/default/528f2c3bfbd1670e2200792a63063679395bf561 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c  .generated_files/flags/default/3e239558989117b4f6553c76ff92a17fed93cd32 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c  .generated_files/flags/default/fe130a47b2f001b35f2eb51a4d7658553afe13c2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c  .generated_files/flags/default/6cbed5be429c86ac52fcff32a37b93de075d759d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c  .generated_files/flags/default/8c300bd2db7ded1bb7c9c8e22dad247797cf50d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c  .generated_files/flags/default/ec59cca600ba7d04ca664d7ae2b9f227c9342c39 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c  .generated_files/flags/default/97aef4d76c8588657a4c1ebd5f0269c7f489c7b0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c  .generated_files/flags/default/81accabf611efea2517a42ecfc229bcaec6450ba .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c  .generated_files/flags/default/10b381364b649535945e3101f11f926be580cf33 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c  .generated_files/flags/default/ec7ab4c156ee99519ba73db025437f20d06346b8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c  .generated_files/flags/default/f5270a3e578dec38b613510e54183c0f51b5ac93 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c  .generated_files/flags/default/7c71b7f632851882932ae72361b967b19a155757 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c  .generated_files/flags/default/bbc1e819fda2b842ef8d63ad0944ea96bfecbe88 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c  .generated_files/flags/default/610d74eadcd274c3b81d63780e4adcda1eafa75a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c  .generated_files/flags/default/295610d491f73c384d6822defcbb78ab188b32e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c  .generated_files/flags/default/5f17b5a46016fc54fb5e068c347746f8c5891913 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image.c  .generated_files/flags/default/23c1e9ec941874ea04f64a8c6f49dbd0eb9f4ffb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ../src/config/default/gfx/legato/widget/image/legato_widget_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c  .generated_files/flags/default/7e73f4649e68e2b82a8d4e0eb90d1862724c94e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c  .generated_files/flags/default/4b53468f593e89a31e6434fc5b5751e54acfe7b8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c  .generated_files/flags/default/10802fe30271133316223ca9de40bec303220f4c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c  .generated_files/flags/default/a26b2ea7073fafdb89dd1adb0f41b9db30cafcf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c  .generated_files/flags/default/a9b2afc51f8b21eea2afa1d3b75a3e7e81b5827d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c  .generated_files/flags/default/e01afcb41cc6aa2d480200e88ca0ee41678c19e3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c  .generated_files/flags/default/97f1d373114cb22541ab68a463658f4b6c7a663c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c  .generated_files/flags/default/ff6aa7fc9ee5f275a307826159bc980c668770a8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c  .generated_files/flags/default/a8373a9e4d5a31045fd3eb23e97710bc0dbe8c36 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label.c  .generated_files/flags/default/40e4eab3577e13b3686496a6ef9cd0e489be2810 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ../src/config/default/gfx/legato/widget/label/legato_widget_label.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c  .generated_files/flags/default/a84f8ed836f46755d52aad609da8e23b795b9f7f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line.c  .generated_files/flags/default/60af9391a755ef129c9a823b224b806844c2be3a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ../src/config/default/gfx/legato/widget/line/legato_widget_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c  .generated_files/flags/default/f6ac9e54cb85cc52c180581ba8c67e6d6e2fa4cf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c  .generated_files/flags/default/89918450a56ba1912d7d12eb18c8d009050b911c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list.c  .generated_files/flags/default/2b8590a49d57f3526f1175fa2aa51d9624950c46 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ../src/config/default/gfx/legato/widget/list/legato_widget_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c  .generated_files/flags/default/b43a6f639e6491e58f7b29976f86e0267c5ed0e6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c  .generated_files/flags/default/7390c4be9d312871d4bcfc298ebc3c1f295a1bfb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c  .generated_files/flags/default/4eb03e87c8669340b1db39c79af58de08ad0ddd1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c  .generated_files/flags/default/a0edf1aec04c5d65539c56505550a8dc9b3a5d29 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c  .generated_files/flags/default/cde23bdac15aa51f42c266a823afa3132aa804b7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c  .generated_files/flags/default/9dc3339a7d1aaa5908e4ff34af71f79b3c1c25dd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c  .generated_files/flags/default/bec190ae81f89493015e9e4cab5a1f839d93881b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c  .generated_files/flags/default/bce87c00c610fbda0ef4b92c04bb5b2ba283fd5e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c  .generated_files/flags/default/daddfc0327e2bccaa9e2d36fe1ec20cda66510ac .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c  .generated_files/flags/default/5dba9e9c51b991d3533e07c29d67cf9f1e77483 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c  .generated_files/flags/default/a48378efd662dc0bdca1dbeade7fcb7b9b59fc3c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c  .generated_files/flags/default/bff927174fcc4959cac47e3bc46a4306e836cfd0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c  .generated_files/flags/default/c04209ee0088dc1e746e11b38ad27485a616ae58 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c  .generated_files/flags/default/8e81e465524d1ff1537b067e6e756ddd952884c5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c  .generated_files/flags/default/ac955a3982bf545c21023a431c2f27df63d4e802 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c  .generated_files/flags/default/f8974d258fd2da20fad68b216ae283764ecc9169 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c  .generated_files/flags/default/e480eca18eafde41cc59232b857988202197f0bc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c  .generated_files/flags/default/1789546fb81ac5a9c85147d3ce2fb0874070b2f9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c  .generated_files/flags/default/5cce68c126454e432f37480fa8a223dc91103e23 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c  .generated_files/flags/default/b6ebb7d1dbf6635ad6189817dd0af3e7b098b35e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c  .generated_files/flags/default/9a019ea405c6dc35ec9a192f7b0f4ecf2391d2f7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c  .generated_files/flags/default/9e922997718b39acd40982e5b07d8b4f0d8e3d43 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c  .generated_files/flags/default/4bb5c1dfcb8e0d1d1d2e02e91b4f694a4af62357 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c  .generated_files/flags/default/9d773022fa2b8aedcc3b8833b0a879146ed0bdd0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window.c  .generated_files/flags/default/50b0404ddf3397f334c2b552e0981f63157cad0c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ../src/config/default/gfx/legato/widget/window/legato_widget_window.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c  .generated_files/flags/default/64f8b9c2e813355e95102a9efdda5e08c79b42c5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_editwidget.o: ../src/config/default/gfx/legato/widget/legato_editwidget.c  .generated_files/flags/default/4012f8345fb4aed81614cd09f53788f98b634c79 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ../src/config/default/gfx/legato/widget/legato_editwidget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget.o: ../src/config/default/gfx/legato/widget/legato_widget.c  .generated_files/flags/default/71c697d3cc66d93aad97a8186787a80508cf5927 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget.o ../src/config/default/gfx/legato/widget/legato_widget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c  .generated_files/flags/default/76c76d0aee202671e64a1923d68ea68db7fa56e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1777736013/gfx_simulator.o: ../src/config/default/gfx/simulator/gfx_simulator.c  .generated_files/flags/default/84b01fe690c971be6a80fcd2b181dca59946da6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1777736013" 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d" -o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ../src/config/default/gfx/simulator/gfx_simulator.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60163497/plib_aic.o: ../src/config/default/peripheral/aic/plib_aic.c  .generated_files/flags/default/de51430e062c7dc51819fae69eead13b8e01d79d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60163497" 
	@${RM} ${OBJECTDIR}/_ext/60163497/plib_aic.o.d 
	@${RM} ${OBJECTDIR}/_ext/60163497/plib_aic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60163497/plib_aic.o.d" -o ${OBJECTDIR}/_ext/60163497/plib_aic.o ../src/config/default/peripheral/aic/plib_aic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  .generated_files/flags/default/1e840826c436df74e81f821dbbe9ba2415d53ce1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60175171/plib_mmu.o: ../src/config/default/peripheral/mmu/plib_mmu.c  .generated_files/flags/default/c934cdb2d0608e6dc2a0e1776804d03e5730d9ea .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60175171" 
	@${RM} ${OBJECTDIR}/_ext/60175171/plib_mmu.o.d 
	@${RM} ${OBJECTDIR}/_ext/60175171/plib_mmu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60175171/plib_mmu.o.d" -o ${OBJECTDIR}/_ext/60175171/plib_mmu.o ../src/config/default/peripheral/mmu/plib_mmu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60177924/plib_pio.o: ../src/config/default/peripheral/pio/plib_pio.c  .generated_files/flags/default/d3558000a63dff8c81948218391b9aa27d104cd2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60177924" 
	@${RM} ${OBJECTDIR}/_ext/60177924/plib_pio.o.d 
	@${RM} ${OBJECTDIR}/_ext/60177924/plib_pio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60177924/plib_pio.o.d" -o ${OBJECTDIR}/_ext/60177924/plib_pio.o ../src/config/default/peripheral/pio/plib_pio.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60177929/plib_pit.o: ../src/config/default/peripheral/pit/plib_pit.c  .generated_files/flags/default/4f9871d0882695889119df01436152dfb2a94712 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60177929" 
	@${RM} ${OBJECTDIR}/_ext/60177929/plib_pit.o.d 
	@${RM} ${OBJECTDIR}/_ext/60177929/plib_pit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60177929/plib_pit.o.d" -o ${OBJECTDIR}/_ext/60177929/plib_pit.o ../src/config/default/peripheral/pit/plib_pit.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/default/466e963a2e606d1757a6cd176ecda84c032e9464 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1014039709/sys_cache.o: ../src/config/default/system/cache/sys_cache.c  .generated_files/flags/default/8d8a49c90934b8e652f388c0f0edcd444ddfaa6b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1014039709" 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1014039709/sys_cache.o.d" -o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ../src/config/default/system/cache/sys_cache.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input_listener.o: ../src/config/default/system/input/sys_input_listener.c  .generated_files/flags/default/d94dbc8bcd5412f3d2a05876066064da177d56b0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ../src/config/default/system/input/sys_input_listener.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input.o: ../src/config/default/system/input/sys_input.c  .generated_files/flags/default/3be506f7fd8cb5a692fd09c2125b3343523659a0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input.o ../src/config/default/system/input/sys_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/default/347f4d9c90d1c5f1f1b4c0ab0532b183d21daa20 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/101884895/sys_time.o: ../src/config/default/system/time/src/sys_time.c  .generated_files/flags/default/1ea07652bf8bd2959ce7793b571706089d04bf26 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/101884895" 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o.d 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/101884895/sys_time.o.d" -o ${OBJECTDIR}/_ext/101884895/sys_time.o ../src/config/default/system/time/src/sys_time.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/fault_handlers.o: ../src/config/default/fault_handlers.c  .generated_files/flags/default/c48813520b8782aa9d25e7fe9aa8bc97634ca6b4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/fault_handlers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/fault_handlers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/fault_handlers.o.d" -o ${OBJECTDIR}/_ext/1171490990/fault_handlers.o ../src/config/default/fault_handlers.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/default/11c4a4ffcaa9112883011606f60e293e51c8caa1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/default/1d43a3219c56b25f909c1d2a8517e415c1074efb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/default/328a97ef71241bd49c1f83572ddd37f9d4ef3769 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/default/6b29aa5910d19d5f4a9480f463db5b2b2a20a0e7 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/default/a48f442488b1e95ef31a7c62430529df5690d03c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/_ext/1319235455/gfx_driver.o: ../src/config/default/gfx/driver/gfx_driver.c  .generated_files/flags/default/4c62763f3054854bbd32570c5871878099b264d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1319235455" 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d 
	@${RM} ${OBJECTDIR}/_ext/1319235455/gfx_driver.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1319235455/gfx_driver.o.d" -o ${OBJECTDIR}/_ext/1319235455/gfx_driver.o ../src/config/default/gfx/driver/gfx_driver.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color.o: ../src/config/default/gfx/legato/common/legato_color.c  .generated_files/flags/default/12831c41c2329697d506eb9268f6d45a0e5b8482 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color.o ../src/config/default/gfx/legato/common/legato_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_math.o: ../src/config/default/gfx/legato/common/legato_math.c  .generated_files/flags/default/cc8fe85ba29aafe11d25b1516403a1489b39bb36 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_math.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_math.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_math.o ../src/config/default/gfx/legato/common/legato_math.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_rect.o: ../src/config/default/gfx/legato/common/legato_rect.c  .generated_files/flags/default/75c65ce3dcf28d8063ada551384db4fa2e796a3f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_rect.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_rect.o ../src/config/default/gfx/legato/common/legato_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o: ../src/config/default/gfx/legato/common/legato_color_lerp.c  .generated_files/flags/default/9c5753c21e6be9191e484017eb8d9eb4bc58d80b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_lerp.o ../src/config/default/gfx/legato/common/legato_color_lerp.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_utils.o: ../src/config/default/gfx/legato/common/legato_utils.c  .generated_files/flags/default/e647cbc3e7a6e2614faf4b569471d0173f432726 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_utils.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_utils.o ../src/config/default/gfx/legato/common/legato_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_value.o: ../src/config/default/gfx/legato/common/legato_color_value.c  .generated_files/flags/default/963813c42d27990fd20584e9271dec2d5420ebd4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_value.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_value.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_value.o ../src/config/default/gfx/legato/common/legato_color_value.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_blend.o: ../src/config/default/gfx/legato/common/legato_color_blend.c  .generated_files/flags/default/9248b2d981bb3881d3b76e839af5165d83e97f72 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_blend.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_blend.o ../src/config/default/gfx/legato/common/legato_color_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_error.o: ../src/config/default/gfx/legato/common/legato_error.c  .generated_files/flags/default/ef9e2c259ea514f73a3e6133ad9327af4444262e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_error.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_error.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_error.o ../src/config/default/gfx/legato/common/legato_error.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o: ../src/config/default/gfx/legato/common/legato_pixelbuffer.c  .generated_files/flags/default/ef5310947bdec01fb9f0d0a422ea1f6d71f4793c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_pixelbuffer.o ../src/config/default/gfx/legato/common/legato_pixelbuffer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1510041067/legato_color_convert.o: ../src/config/default/gfx/legato/common/legato_color_convert.c  .generated_files/flags/default/7cacbe0c7fdb55fb88a9f99f2410c29633e62cc3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1510041067" 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1510041067/legato_color_convert.o.d" -o ${OBJECTDIR}/_ext/1510041067/legato_color_convert.o ../src/config/default/gfx/legato/common/legato_color_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_stream.o: ../src/config/default/gfx/legato/core/legato_stream.c  .generated_files/flags/default/2390d44305ca1808f87c567b753dc518ee8f6794 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_stream.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_stream.o ../src/config/default/gfx/legato/core/legato_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_event.o: ../src/config/default/gfx/legato/core/legato_event.c  .generated_files/flags/default/b4b75fc31178e3676ce699064f2386387aaf4d6a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_event.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_event.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_event.o ../src/config/default/gfx/legato/core/legato_event.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_scheme.o: ../src/config/default/gfx/legato/core/legato_scheme.c  .generated_files/flags/default/bcdf26700a1dc2c2236cef2e87a1a8d451ee74fa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_scheme.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_scheme.o ../src/config/default/gfx/legato/core/legato_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_input.o: ../src/config/default/gfx/legato/core/legato_input.c  .generated_files/flags/default/626468cd5af60f98cffd46d7f0a826abaa954d0e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_input.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_input.o ../src/config/default/gfx/legato/core/legato_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92283465/legato_state.o: ../src/config/default/gfx/legato/core/legato_state.c  .generated_files/flags/default/fec8af5ea50e6bf698fd223964a5074a2fd0f595 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92283465" 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/92283465/legato_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92283465/legato_state.o.d" -o ${OBJECTDIR}/_ext/92283465/legato_state.o ../src/config/default/gfx/legato/core/legato_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_array.o: ../src/config/default/gfx/legato/datastructure/legato_array.c  .generated_files/flags/default/226182f9ae31ad499a93688670e18c3c9303b73 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_array.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_array.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_array.o ../src/config/default/gfx/legato/datastructure/legato_array.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_rectarray.o: ../src/config/default/gfx/legato/datastructure/legato_rectarray.c  .generated_files/flags/default/3e66b1ff39fa4485898a26495f25864f2aad7d1d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_rectarray.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_rectarray.o ../src/config/default/gfx/legato/datastructure/legato_rectarray.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2021927327/legato_list.o: ../src/config/default/gfx/legato/datastructure/legato_list.c  .generated_files/flags/default/da9758c5cc154b4cf39982c5009c4d8dace568e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2021927327" 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/2021927327/legato_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2021927327/legato_list.o.d" -o ${OBJECTDIR}/_ext/2021927327/legato_list.o ../src/config/default/gfx/legato/datastructure/legato_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c  .generated_files/flags/default/a7671dd4a4eb205fff6daff3873b3adb527370b1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono1.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o: ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c  .generated_files/flags/default/62af1ef496ffa8685abfb6233fb56cd90fd96416 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_liberationmono8.o ../src/config/default/gfx/legato/font/legato_rasterfont_liberationmono8.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o: ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c  .generated_files/flags/default/d61d5d0ed0cc4eefc7ec928a3c8ba60e770f3508 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_rasterfont_stream.o ../src/config/default/gfx/legato/font/legato_rasterfont_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/92372729/legato_font.o: ../src/config/default/gfx/legato/font/legato_font.c  .generated_files/flags/default/fd635fc89ce20ed160000f67ef3ac2f6c66caade .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/92372729" 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o.d 
	@${RM} ${OBJECTDIR}/_ext/92372729/legato_font.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/92372729/legato_font.o.d" -o ${OBJECTDIR}/_ext/92372729/legato_font.o ../src/config/default/gfx/legato/font/legato_font.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o: ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c  .generated_files/flags/default/f85c33e7fa3183c75197baa6a87d428392e52608 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1494086919" 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o.d" -o ${OBJECTDIR}/_ext/1494086919/le_gen_fonts.o ../src/config/default/gfx/legato/generated/font/le_gen_fonts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/930643953/le_gen_images.o: ../src/config/default/gfx/legato/generated/image/le_gen_images.c  .generated_files/flags/default/337698a851c60b3248ee0593c99fdcd74e84e1ef .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/930643953" 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o.d 
	@${RM} ${OBJECTDIR}/_ext/930643953/le_gen_images.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/930643953/le_gen_images.o.d" -o ${OBJECTDIR}/_ext/930643953/le_gen_images.o ../src/config/default/gfx/legato/generated/image/le_gen_images.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c  .generated_files/flags/default/3185a7e5c9fcfabdc3c4505320e06230bb8bb3c6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen1.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen1.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o: ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c  .generated_files/flags/default/ad5aafbfd0f1255b1edc855e7d505cb011f09c2b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/937247594" 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d 
	@${RM} ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o.d" -o ${OBJECTDIR}/_ext/937247594/le_gen_screen_Screen0.o ../src/config/default/gfx/legato/generated/screen/le_gen_screen_Screen0.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o: ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c  .generated_files/flags/default/13a67591db162422f83f22bbda2eb2a5cfaa0578 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_globalpalette.o ../src/config/default/gfx/legato/generated/le_gen_globalpalette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o: ../src/config/default/gfx/legato/generated/le_gen_stringtable.c  .generated_files/flags/default/bde4839a1fd7e9a88e1fda16791a3000f1e22d0e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_stringtable.o ../src/config/default/gfx/legato/generated/le_gen_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o: ../src/config/default/gfx/legato/generated/le_gen_harmony.c  .generated_files/flags/default/de5e0bfb3fb3c437440f7d32e76fe3b0a5f317d8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_harmony.o ../src/config/default/gfx/legato/generated/le_gen_harmony.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_init.o: ../src/config/default/gfx/legato/generated/le_gen_init.c  .generated_files/flags/default/e1dce891f6ccda32f20411993622583214de19a5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_init.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_init.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_init.o ../src/config/default/gfx/legato/generated/le_gen_init.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o: ../src/config/default/gfx/legato/generated/le_gen_scheme.c  .generated_files/flags/default/88fbb3e3378d4195a72e24a177015c1ab38f5ad4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1626882341" 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d 
	@${RM} ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o.d" -o ${OBJECTDIR}/_ext/1626882341/le_gen_scheme.o ../src/config/default/gfx/legato/generated/le_gen_scheme.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/jidctint.o: ../src/config/default/gfx/legato/image/jpeg/jidctint.c  .generated_files/flags/default/d7004e9975b183a99e5fdb3952a90864054d71a5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/jidctint.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/jidctint.o.d" -o ${OBJECTDIR}/_ext/1395618758/jidctint.o ../src/config/default/gfx/legato/image/jpeg/jidctint.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c  .generated_files/flags/default/17e9043e1e00850af7a001f93cec7a8fd5cc6d27 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o: ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c  .generated_files/flags/default/1f3fc9d81eee133564ae4f28d126d9c3549da6e6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395618758" 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o.d" -o ${OBJECTDIR}/_ext/1395618758/legato_imagedecoder_jpeg_common.o ../src/config/default/gfx/legato/image/jpeg/legato_imagedecoder_jpeg_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c  .generated_files/flags/default/391e978fdaf06703485438f1fd01e7f916afdc7c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c  .generated_files/flags/default/a7cded20b69a8df09f362c9d55b44ec5d122796b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_internal.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o: ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c  .generated_files/flags/default/322ea1a89743dec99460630c6381c0de1a842fc0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1395707457" 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o.d" -o ${OBJECTDIR}/_ext/1395707457/legato_imagedecoder_mono_read_stream.o ../src/config/default/gfx/legato/image/mono/legato_imagedecoder_mono_read_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o: ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c  .generated_files/flags/default/5c689ea1e0961a0d8bd3747e6781637a0d7aacd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o.d" -o ${OBJECTDIR}/_ext/460667659/legato_imagedecoder_png.o ../src/config/default/gfx/legato/image/png/legato_imagedecoder_png.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460667659/lodepng.o: ../src/config/default/gfx/legato/image/png/lodepng.c  .generated_files/flags/default/a9c35854a94e2ebef369aaf239c555bfe85324 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460667659" 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o.d 
	@${RM} ${OBJECTDIR}/_ext/460667659/lodepng.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460667659/lodepng.o.d" -o ${OBJECTDIR}/_ext/460667659/lodepng.o ../src/config/default/gfx/legato/image/png/lodepng.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c  .generated_files/flags/default/9791cdf57f5eb6984f9eb8548a84e83a7dc243bf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c  .generated_files/flags/default/666d74b116c0afadac322845f07362a4a0b6d0a4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_convert.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_convert.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c  .generated_files/flags/default/22b69e96ae10fcdc7068f12e4183ba8855c7f2eb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_write.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_write.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c  .generated_files/flags/default/bebfcd136d5079825c841b28f4f35d72f18c675c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_color.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_color.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c  .generated_files/flags/default/f1800bce179575d9ab46ec1efc745bf44b997dde .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_setup.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_setup.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c  .generated_files/flags/default/7458234ce077d2d693344f59f795d6bbb41a8fa4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_rotate.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_rotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c  .generated_files/flags/default/cf52305198c2c6e5a65ba1d34e4582b18d948b1c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_internal.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c  .generated_files/flags/default/c2025427e8194f070cee6a81bc63b1fad19857f2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_scale.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_scale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c  .generated_files/flags/default/c5568f583c0b04b4c6e831862bb5e857316510e8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_index.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_index.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c  .generated_files/flags/default/710250fbcaf052c3292e7cb7e87de45f61e72da9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c  .generated_files/flags/default/ce0df902b1652346f6c386d7f7363b1aecb8355 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_palette_stream.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_palette_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c  .generated_files/flags/default/ab60d0d77a59914c38e9ff58a1e94e27c541b4b9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rlecolor.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rlecolor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c  .generated_files/flags/default/c7a1098849985a27eb4b68894963b105ec4a6560 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_mask.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_mask.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c  .generated_files/flags/default/526fa6f9e3aa1621de2adcde3ee9540ba5c67a85 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_blend.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_blend.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o: ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c  .generated_files/flags/default/91bdbeb4eefd2e314e017355dba856ce3c83d4b2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/460669194" 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d 
	@${RM} ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o.d" -o ${OBJECTDIR}/_ext/460669194/legato_imagedecoder_raw_read_stream_rleindex.o ../src/config/default/gfx/legato/image/raw/legato_imagedecoder_raw_read_stream_rleindex.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image.o: ../src/config/default/gfx/legato/image/legato_image.c  .generated_files/flags/default/a1ffc1e47fc4f1b51f5b1cbb0ae32a387a6853e4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image.o ../src/config/default/gfx/legato/image/legato_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_palette.o: ../src/config/default/gfx/legato/image/legato_palette.c  .generated_files/flags/default/1bcd7050ab05fcd5959d7d9cff20e3ca461acd58 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_palette.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_palette.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_palette.o ../src/config/default/gfx/legato/image/legato_palette.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1428714511/legato_image_utils.o: ../src/config/default/gfx/legato/image/legato_image_utils.c  .generated_files/flags/default/df908c06ce0a56c8ef460b6f0d8972ee226963db .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1428714511" 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1428714511/legato_image_utils.o.d" -o ${OBJECTDIR}/_ext/1428714511/legato_image_utils.o ../src/config/default/gfx/legato/image/legato_image_utils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_memory.o: ../src/config/default/gfx/legato/memory/legato_memory.c  .generated_files/flags/default/fd6be19e0a933b3a0aa83bcc5acdd152f652852d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_memory.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_memory.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_memory.o ../src/config/default/gfx/legato/memory/legato_memory.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o: ../src/config/default/gfx/legato/memory/legato_fixedheap.c  .generated_files/flags/default/3be14a16d9f874281f49a1a617f8c912d4869642 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_fixedheap.o ../src/config/default/gfx/legato/memory/legato_fixedheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1232982741/legato_variableheap.o: ../src/config/default/gfx/legato/memory/legato_variableheap.c  .generated_files/flags/default/b5db3757acd0938527501a2a996b608497f28ccc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1232982741" 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d 
	@${RM} ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1232982741/legato_variableheap.o.d" -o ${OBJECTDIR}/_ext/1232982741/legato_variableheap.o ../src/config/default/gfx/legato/memory/legato_variableheap.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_line.o: ../src/config/default/gfx/legato/renderer/legato_draw_line.c  .generated_files/flags/default/54032ac3356a2501c46ba6ff9e873c9624330879 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_line.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_line.o ../src/config/default/gfx/legato/renderer/legato_draw_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_rect.o: ../src/config/default/gfx/legato/renderer/legato_draw_rect.c  .generated_files/flags/default/2e71b10d2b73675b7f3784e98040d6eb2100c8c9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_rect.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_rect.o ../src/config/default/gfx/legato/renderer/legato_draw_rect.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw_arc.o: ../src/config/default/gfx/legato/renderer/legato_draw_arc.c  .generated_files/flags/default/b77cb7eb4751a8881674bfcec4a776cf1b401b58 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw_arc.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw_arc.o ../src/config/default/gfx/legato/renderer/legato_draw_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_renderer.o: ../src/config/default/gfx/legato/renderer/legato_renderer.c  .generated_files/flags/default/c84650939419b77027ddc76f089c8ab1e175ed5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_renderer.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_renderer.o ../src/config/default/gfx/legato/renderer/legato_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_draw.o: ../src/config/default/gfx/legato/renderer/legato_draw.c  .generated_files/flags/default/58df72ca5648bc67a5b7aebb03aed1da644fb569 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_draw.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_draw.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_draw.o ../src/config/default/gfx/legato/renderer/legato_draw.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/656756333/legato_gpu.o: ../src/config/default/gfx/legato/renderer/legato_gpu.c  .generated_files/flags/default/8f7da7fa504cba87e2abb620f868daa69c9871bf .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/656756333" 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o.d 
	@${RM} ${OBJECTDIR}/_ext/656756333/legato_gpu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/656756333/legato_gpu.o.d" -o ${OBJECTDIR}/_ext/656756333/legato_gpu.o ../src/config/default/gfx/legato/renderer/legato_gpu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringtable.o: ../src/config/default/gfx/legato/string/legato_stringtable.c  .generated_files/flags/default/4d6f2dc6a854d74903f4074f546f459a039b8634 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringtable.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringtable.o ../src/config/default/gfx/legato/string/legato_stringtable.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o: ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c  .generated_files/flags/default/26bd1d847ec06ded2601f1d05b2bb8bcfd4a50eb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer_stream.o ../src/config/default/gfx/legato/string/legato_string_renderer_stream.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o: ../src/config/default/gfx/legato/string/legato_fixedstring.c  .generated_files/flags/default/921db225fe4ce5cd534546a397a4703784b9c587 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_fixedstring.o ../src/config/default/gfx/legato/string/legato_fixedstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o: ../src/config/default/gfx/legato/string/legato_dynamicstring.c  .generated_files/flags/default/9a9f1603a8bb17a5202d9b3249a3b35fe7c63000 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_dynamicstring.o ../src/config/default/gfx/legato/string/legato_dynamicstring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o: ../src/config/default/gfx/legato/string/legato_string_renderer.c  .generated_files/flags/default/217a8446857ba34463d9ec84b8ea87295eb04ef8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string_renderer.o ../src/config/default/gfx/legato/string/legato_string_renderer.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_stringutils.o: ../src/config/default/gfx/legato/string/legato_stringutils.c  .generated_files/flags/default/cdeee797bae7461e0d178edc45faf4773731ccf6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_stringutils.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_stringutils.o ../src/config/default/gfx/legato/string/legato_stringutils.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_tablestring.o: ../src/config/default/gfx/legato/string/legato_tablestring.c  .generated_files/flags/default/34f725a741813b280cab89c8e89a861d5723b420 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_tablestring.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_tablestring.o ../src/config/default/gfx/legato/string/legato_tablestring.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1047211973/legato_string.o: ../src/config/default/gfx/legato/string/legato_string.c  .generated_files/flags/default/a7cbd6b1ac24b4857bf44e9619c3cea945aef3e3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1047211973" 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o.d 
	@${RM} ${OBJECTDIR}/_ext/1047211973/legato_string.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1047211973/legato_string.o.d" -o ${OBJECTDIR}/_ext/1047211973/legato_string.o ../src/config/default/gfx/legato/string/legato_string.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c  .generated_files/flags/default/d404faf24478a9803791e244b3240486581db479 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o: ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c  .generated_files/flags/default/67ada25f929d817cc86ed4a5e8470ca7bd7b16ea .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1720272079" 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1720272079/legato_widget_arc_skin_classic.o ../src/config/default/gfx/legato/widget/arc/legato_widget_arc_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c  .generated_files/flags/default/45334f361622caf5a118b7f9b24d427966f0736a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c  .generated_files/flags/default/6329b1a1a2cd51e43f0c2e4335d72fdc5065de7d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1379158940" 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1379158940/legato_widget_bar_graph_skin_classic.o ../src/config/default/gfx/legato/widget/bargraph/legato_widget_bar_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button.c  .generated_files/flags/default/b1a63ab6d57e7faec50c18eb761c2941ff06e0c3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button.o ../src/config/default/gfx/legato/widget/button/legato_widget_button.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o: ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c  .generated_files/flags/default/26c028fb04f2301cace4c7f194a3e6ce4424eca5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1043708429" 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1043708429/legato_widget_button_skin_classic.o ../src/config/default/gfx/legato/widget/button/legato_widget_button_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c  .generated_files/flags/default/3018e3cfc6ade689c4f7f9ae8cb1ba20377be5c9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox_skin_classic.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o: ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c  .generated_files/flags/default/3d66edd98a389026840d402449f7b521d16b5ed3 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/368479812" 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o.d" -o ${OBJECTDIR}/_ext/368479812/legato_widget_checkbox.o ../src/config/default/gfx/legato/widget/checkbox/legato_widget_checkbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c  .generated_files/flags/default/553990c0c984a69646fc1904f22cf42e82c7eabe .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o: ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c  .generated_files/flags/default/a71de9ea4eb49fded05d29464569abd343103958 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1026237551" 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1026237551/legato_widget_circle_skin_classic.o ../src/config/default/gfx/legato/widget/circle/legato_widget_circle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c  .generated_files/flags/default/d05f6dbe44dc8959efcec3b371aeb72660e705c9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge_skin_classic.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o: ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c  .generated_files/flags/default/119dbcba92a3a72f2d14ed01642b3ca7a8a67a80 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2143783897" 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d 
	@${RM} ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o.d" -o ${OBJECTDIR}/_ext/2143783897/legato_widget_circular_gauge.o ../src/config/default/gfx/legato/widget/circulargauge/legato_widget_circular_gauge.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c  .generated_files/flags/default/8becab4cd61756d2d250a235c34e7454cdf4c88e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c  .generated_files/flags/default/f7bf8864779deb19149ba935fcb83f38f4e4f1e5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1908827647" 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1908827647/legato_widget_circular_slider_skin_classic.o ../src/config/default/gfx/legato/widget/circularslider/legato_widget_circular_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c  .generated_files/flags/default/50399b799e3b837add711072fac6375d0f6a254f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o: ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c  .generated_files/flags/default/e987195f5983c23198c889f75e71f3082e42bf44 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1828717368" 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1828717368/legato_widget_drawsurface_skin_classic.o ../src/config/default/gfx/legato/widget/drawsurface/legato_widget_drawsurface_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c  .generated_files/flags/default/51b299e0d62db00504642943d8227c9b86f64217 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o: ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c  .generated_files/flags/default/664ff1ef7f466519c0db4c718b04494384aff1a9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1078761039" 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1078761039/legato_widget_gradient_skin_classic.o ../src/config/default/gfx/legato/widget/gradient/legato_widget_gradient_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c  .generated_files/flags/default/88b54ef8e8b79eb54f7e807d6da948202837d77 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox_skin_classic.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o: ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c  .generated_files/flags/default/20431a54b6029cf3690122314e2c0192cd66591b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/662047379" 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d 
	@${RM} ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o.d" -o ${OBJECTDIR}/_ext/662047379/legato_widget_groupbox.o ../src/config/default/gfx/legato/widget/groupbox/legato_widget_groupbox.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c  .generated_files/flags/default/f3a6cd3ab8a5ba3a473b25135d8d19accb3b07a4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image_skin_classic.o ../src/config/default/gfx/legato/widget/image/legato_widget_image_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/388181626/legato_widget_image.o: ../src/config/default/gfx/legato/widget/image/legato_widget_image.c  .generated_files/flags/default/50244df4173a64f4e84fd284bed40a757801cbaa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/388181626" 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d 
	@${RM} ${OBJECTDIR}/_ext/388181626/legato_widget_image.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/388181626/legato_widget_image.o.d" -o ${OBJECTDIR}/_ext/388181626/legato_widget_image.o ../src/config/default/gfx/legato/widget/image/legato_widget_image.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c  .generated_files/flags/default/185ad8611162ba2cd5c0f1e14abff73e10ba98be .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate_skin_classic.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o: ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c  .generated_files/flags/default/d646345d9a60495e7ecd24f8e38fed3ea86c561d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1310443605" 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d 
	@${RM} ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o.d" -o ${OBJECTDIR}/_ext/1310443605/legato_widget_imagerotate.o ../src/config/default/gfx/legato/widget/imagerotate/legato_widget_imagerotate.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c  .generated_files/flags/default/d7e8aa7dfd29e305ae883a83ce43fbfb7555405d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o: ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c  .generated_files/flags/default/3eae82a62509ccbd65ddeb130f63b268ea3b332d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1012651792" 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1012651792/legato_widget_imagescale_skin_classic.o ../src/config/default/gfx/legato/widget/imagescale/legato_widget_imagescale_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c  .generated_files/flags/default/a557612a28627725091f6c5f2622a2310672b523 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o: ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c  .generated_files/flags/default/7e60602c84dab218562f56ad94fb9eaa553f6b1a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1994224581" 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1994224581/legato_widget_imagesequence_skin_classic.o ../src/config/default/gfx/legato/widget/imagesequence/legato_widget_imagesequence_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c  .generated_files/flags/default/c63fca656ab00c4c8ca70fb12525857171578886 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o: ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c  .generated_files/flags/default/e5867c4845625cc74cc66d81e62a8be666fc3f7e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/800677739" 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o.d" -o ${OBJECTDIR}/_ext/800677739/legato_widget_keypad_skin_classic.o ../src/config/default/gfx/legato/widget/keypad/legato_widget_keypad_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c  .generated_files/flags/default/ad0648a579e30b80bf3b62123c692eab92bb6e85 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label_skin_classic.o ../src/config/default/gfx/legato/widget/label/legato_widget_label_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/390595603/legato_widget_label.o: ../src/config/default/gfx/legato/widget/label/legato_widget_label.c  .generated_files/flags/default/eede15f956a827823c47650168d30461b0e71c9d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/390595603" 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d 
	@${RM} ${OBJECTDIR}/_ext/390595603/legato_widget_label.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/390595603/legato_widget_label.o.d" -o ${OBJECTDIR}/_ext/390595603/legato_widget_label.o ../src/config/default/gfx/legato/widget/label/legato_widget_label.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c  .generated_files/flags/default/d9f3bf69e101fb734cdd632f6cd43c61b9b6531f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line_skin_classic.o ../src/config/default/gfx/legato/widget/line/legato_widget_line_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507403/legato_widget_line.o: ../src/config/default/gfx/legato/widget/line/legato_widget_line.c  .generated_files/flags/default/666408794fc1167628d167cddff159098ab872de .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507403" 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507403/legato_widget_line.o.d" -o ${OBJECTDIR}/_ext/1788507403/legato_widget_line.o ../src/config/default/gfx/legato/widget/line/legato_widget_line.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c  .generated_files/flags/default/103ead07b94db4d2c2091f48f2b4e1960b55502e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph_skin_classic.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o: ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c  .generated_files/flags/default/e9cf9bdc8f4725ee54e60c646600ffe5455da710 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/645187449" 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d 
	@${RM} ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o.d" -o ${OBJECTDIR}/_ext/645187449/legato_widget_line_graph.o ../src/config/default/gfx/legato/widget/linegraph/legato_widget_line_graph.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list.c  .generated_files/flags/default/d5ab93ed6e6703b44988385f2c76043c958e5834 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list.o ../src/config/default/gfx/legato/widget/list/legato_widget_list.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o: ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c  .generated_files/flags/default/c24cc491dc52c7212f38c38a7368ae15e023526b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1788507233" 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1788507233/legato_widget_list_skin_classic.o ../src/config/default/gfx/legato/widget/list/legato_widget_list_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c  .generated_files/flags/default/26ff3fce32d338b7631df08664a4f0c2144ed0cd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o: ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c  .generated_files/flags/default/3af5452cc32bb0e20602c9f4cab9c84a6c879e60 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1231657756" 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1231657756/legato_widget_listwheel_skin_classic.o ../src/config/default/gfx/legato/widget/listwheel/legato_widget_listwheel_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c  .generated_files/flags/default/fde90c674ffc9dc3a9f15398038132b7c2c68c5f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart_skin_classic.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o: ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c  .generated_files/flags/default/53d74aa87110367810f702519d706e9bedbd1166 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1857376173" 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o.d" -o ${OBJECTDIR}/_ext/1857376173/legato_widget_pie_chart.o ../src/config/default/gfx/legato/widget/piechart/legato_widget_pie_chart.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c  .generated_files/flags/default/2323ca26bf786b33f22448ddb40157c6e62ede53 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar_skin_classic.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o: ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c  .generated_files/flags/default/1f69b98df6b5cf669b5b677faea8165137d0cb86 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/616308571" 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o.d" -o ${OBJECTDIR}/_ext/616308571/legato_widget_progressbar.o ../src/config/default/gfx/legato/widget/progressbar/legato_widget_progressbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c  .generated_files/flags/default/b41cac641c26859fb5c24db9d15be13c31d48da0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c  .generated_files/flags/default/7250925197254e3e311fc45b563b6e777f758baa .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_skin_classic.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o: ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c  .generated_files/flags/default/e6d67412a164f94ef1a1ca23e4749aba2170752 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/2046438975" 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o.d" -o ${OBJECTDIR}/_ext/2046438975/legato_widget_radial_menu_state.o ../src/config/default/gfx/legato/widget/radialmenu/legato_widget_radial_menu_state.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c  .generated_files/flags/default/79e5dc3ac228850c68df077e0cee45ac56ec2ed9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c  .generated_files/flags/default/ecdd3783db03ade9f3e3c70d48b52c951105dab1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_widget_radiobutton_skin_classic.o ../src/config/default/gfx/legato/widget/radiobutton/legato_widget_radiobutton_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o: ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c  .generated_files/flags/default/fc35508624b86159a445e75434f956c30769686f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1723202356" 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d 
	@${RM} ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o.d" -o ${OBJECTDIR}/_ext/1723202356/legato_radiobutton_group.o ../src/config/default/gfx/legato/widget/radiobutton/legato_radiobutton_group.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c  .generated_files/flags/default/1447312cd26eb48775dc1c3f53623a5a6e50476c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o: ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c  .generated_files/flags/default/c270f126abeeba11ff9000ceff90da3caa75ee56 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/739734770" 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o.d" -o ${OBJECTDIR}/_ext/739734770/legato_widget_rectangle_skin_classic.o ../src/config/default/gfx/legato/widget/rectangle/legato_widget_rectangle_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c  .generated_files/flags/default/46d9ba4a49e92edb82d0671708d79060894865e9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o: ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c  .generated_files/flags/default/c48898bfd7b8e26238ca8ad23bb76b9bf081c9a6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1443241019" 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1443241019/legato_widget_scrollbar_skin_classic.o ../src/config/default/gfx/legato/widget/scrollbar/legato_widget_scrollbar_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c  .generated_files/flags/default/5c62af2b947516b2b0fa4bd9e1a91daf039adefc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider_skin_classic.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/565667934/legato_widget_slider.o: ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c  .generated_files/flags/default/d0ff7d3289b6b5bc1bf6cee27f55f24e2e6d212c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/565667934" 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/565667934/legato_widget_slider.o.d" -o ${OBJECTDIR}/_ext/565667934/legato_widget_slider.o ../src/config/default/gfx/legato/widget/slider/legato_widget_slider.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c  .generated_files/flags/default/ede1e3ade85f39f57fd5802c146837f1e3c0fbfd .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield_skin_classic.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o: ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c  .generated_files/flags/default/16c7a4d44b83d5f018872bbebf395cadc8b0eaa5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1402498444" 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d 
	@${RM} ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o.d" -o ${OBJECTDIR}/_ext/1402498444/legato_widget_textfield.o ../src/config/default/gfx/legato/widget/textfield/legato_widget_textfield.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c  .generated_files/flags/default/58342ce6db0d22a2859752e0d92b88393631ab65 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o: ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c  .generated_files/flags/default/9448561c99f2fb58ad1db453200272ce938120c4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1496299024" 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o.d" -o ${OBJECTDIR}/_ext/1496299024/legato_widget_touchtest_skin_classic.o ../src/config/default/gfx/legato/widget/touchtest/legato_widget_touchtest_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c  .generated_files/flags/default/6d41e0f95413d7dedb9672670b6259a0f7e68ad0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window_skin_classic.o ../src/config/default/gfx/legato/widget/window/legato_widget_window_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/453772623/legato_widget_window.o: ../src/config/default/gfx/legato/widget/window/legato_widget_window.c  .generated_files/flags/default/91fdbfc3aae373d752068bd5e37463b581ad57a1 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/453772623" 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d 
	@${RM} ${OBJECTDIR}/_ext/453772623/legato_widget_window.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/453772623/legato_widget_window.o.d" -o ${OBJECTDIR}/_ext/453772623/legato_widget_window.o ../src/config/default/gfx/legato/widget/window/legato_widget_window.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c  .generated_files/flags/default/f6f794ea7897065023652220abb8a034b4bf272f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic_common.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic_common.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_editwidget.o: ../src/config/default/gfx/legato/widget/legato_editwidget.c  .generated_files/flags/default/b4f22297970e1a71b341439b7f7e283d3addabf9 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_editwidget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_editwidget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_editwidget.o ../src/config/default/gfx/legato/widget/legato_editwidget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget.o: ../src/config/default/gfx/legato/widget/legato_widget.c  .generated_files/flags/default/63ddae0cf8277be27aafd09f2268c74b7f5ed39c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget.o ../src/config/default/gfx/legato/widget/legato_widget.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o: ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c  .generated_files/flags/default/f9a1c64619083f1195dc0e87ad5eed191e7acb13 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/943273362" 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d 
	@${RM} ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o.d" -o ${OBJECTDIR}/_ext/943273362/legato_widget_skin_classic.o ../src/config/default/gfx/legato/widget/legato_widget_skin_classic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1777736013/gfx_simulator.o: ../src/config/default/gfx/simulator/gfx_simulator.c  .generated_files/flags/default/f46e0547a6931a088b29494a12d2a97f08d68d0e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1777736013" 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d 
	@${RM} ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1777736013/gfx_simulator.o.d" -o ${OBJECTDIR}/_ext/1777736013/gfx_simulator.o ../src/config/default/gfx/simulator/gfx_simulator.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60163497/plib_aic.o: ../src/config/default/peripheral/aic/plib_aic.c  .generated_files/flags/default/1f0930025f8c0459daa3de7068e58b75e76b5ecb .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60163497" 
	@${RM} ${OBJECTDIR}/_ext/60163497/plib_aic.o.d 
	@${RM} ${OBJECTDIR}/_ext/60163497/plib_aic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60163497/plib_aic.o.d" -o ${OBJECTDIR}/_ext/60163497/plib_aic.o ../src/config/default/peripheral/aic/plib_aic.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60165520/plib_clk.o: ../src/config/default/peripheral/clk/plib_clk.c  .generated_files/flags/default/619865542fca51fc47e4f4d957f5f0cc899d16ee .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60165520" 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/60165520/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60165520/plib_clk.o.d" -o ${OBJECTDIR}/_ext/60165520/plib_clk.o ../src/config/default/peripheral/clk/plib_clk.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60175171/plib_mmu.o: ../src/config/default/peripheral/mmu/plib_mmu.c  .generated_files/flags/default/ad587e97fa5ef1a19aab7daf2a7f60055f6e30d0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60175171" 
	@${RM} ${OBJECTDIR}/_ext/60175171/plib_mmu.o.d 
	@${RM} ${OBJECTDIR}/_ext/60175171/plib_mmu.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60175171/plib_mmu.o.d" -o ${OBJECTDIR}/_ext/60175171/plib_mmu.o ../src/config/default/peripheral/mmu/plib_mmu.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60177924/plib_pio.o: ../src/config/default/peripheral/pio/plib_pio.c  .generated_files/flags/default/c1e17d9b4f416e72e252ba48665f8d967791a9e5 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60177924" 
	@${RM} ${OBJECTDIR}/_ext/60177924/plib_pio.o.d 
	@${RM} ${OBJECTDIR}/_ext/60177924/plib_pio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60177924/plib_pio.o.d" -o ${OBJECTDIR}/_ext/60177924/plib_pio.o ../src/config/default/peripheral/pio/plib_pio.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/60177929/plib_pit.o: ../src/config/default/peripheral/pit/plib_pit.c  .generated_files/flags/default/583dedee83a5392ce76b608dfcaa864c01b50b6b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/60177929" 
	@${RM} ${OBJECTDIR}/_ext/60177929/plib_pit.o.d 
	@${RM} ${OBJECTDIR}/_ext/60177929/plib_pit.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/60177929/plib_pit.o.d" -o ${OBJECTDIR}/_ext/60177929/plib_pit.o ../src/config/default/peripheral/pit/plib_pit.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/163028504/xc32_monitor.o: ../src/config/default/stdio/xc32_monitor.c  .generated_files/flags/default/717376bfcc24357c39fd87315d0f0deed386b732 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/163028504" 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/163028504/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/163028504/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/163028504/xc32_monitor.o ../src/config/default/stdio/xc32_monitor.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1014039709/sys_cache.o: ../src/config/default/system/cache/sys_cache.c  .generated_files/flags/default/8cebdff22399e0f61e72a86165fffe7a349e40f2 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1014039709" 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o.d 
	@${RM} ${OBJECTDIR}/_ext/1014039709/sys_cache.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1014039709/sys_cache.o.d" -o ${OBJECTDIR}/_ext/1014039709/sys_cache.o ../src/config/default/system/cache/sys_cache.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input_listener.o: ../src/config/default/system/input/sys_input_listener.c  .generated_files/flags/default/b3708e4de6e5c77adc6473c722bc00080df6e112 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input_listener.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input_listener.o ../src/config/default/system/input/sys_input_listener.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1008098389/sys_input.o: ../src/config/default/system/input/sys_input.c  .generated_files/flags/default/33572cd58a59a94f34bd5ea66ceca0e5ded80f2a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1008098389" 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o.d 
	@${RM} ${OBJECTDIR}/_ext/1008098389/sys_input.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1008098389/sys_input.o.d" -o ${OBJECTDIR}/_ext/1008098389/sys_input.o ../src/config/default/system/input/sys_input.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1881668453/sys_int.o: ../src/config/default/system/int/src/sys_int.c  .generated_files/flags/default/42b6de72004e9dcd18ab5dba6d0c51740112f4a4 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1881668453" 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/1881668453/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1881668453/sys_int.o.d" -o ${OBJECTDIR}/_ext/1881668453/sys_int.o ../src/config/default/system/int/src/sys_int.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/101884895/sys_time.o: ../src/config/default/system/time/src/sys_time.c  .generated_files/flags/default/6ddbb45dd903d2fbb6112d7a882e44ba9dfb4ef0 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/101884895" 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o.d 
	@${RM} ${OBJECTDIR}/_ext/101884895/sys_time.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/101884895/sys_time.o.d" -o ${OBJECTDIR}/_ext/101884895/sys_time.o ../src/config/default/system/time/src/sys_time.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/fault_handlers.o: ../src/config/default/fault_handlers.c  .generated_files/flags/default/2d3f302b01f5482b4b2bee52f2de1ce4b8cf3060 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/fault_handlers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/fault_handlers.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/fault_handlers.o.d" -o ${OBJECTDIR}/_ext/1171490990/fault_handlers.o ../src/config/default/fault_handlers.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/interrupts.o: ../src/config/default/interrupts.c  .generated_files/flags/default/10e1d22da88d5e70ac8ae8b77d6da93f9852cc37 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/interrupts.o.d" -o ${OBJECTDIR}/_ext/1171490990/interrupts.o ../src/config/default/interrupts.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/tasks.o: ../src/config/default/tasks.c  .generated_files/flags/default/1cd4dcd2dc31198a21bd3df7405b07e1c18f2e84 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/tasks.o.d" -o ${OBJECTDIR}/_ext/1171490990/tasks.o ../src/config/default/tasks.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1171490990/initialization.o: ../src/config/default/initialization.c  .generated_files/flags/default/779774ba177d307797ed97fb579f11408bbdb1b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1171490990" 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1171490990/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1171490990/initialization.o.d" -o ${OBJECTDIR}/_ext/1171490990/initialization.o ../src/config/default/initialization.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/default/6b4997e7f53faa78b4d753db27ca5e4f9f168e5b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  .generated_files/flags/default/48919fa502cc7b332283d853ad3a16a14265a26f .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -fno-common -I"../src" -I"../src/config/default" -I"../src/packs/SAM9X75_DFP" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../src/config/default/ddram.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o ${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../src/config/default/ddram.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o ${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}\\xc32-bin2hex ${DISTDIR}/GFX_Sim_Slider.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
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
