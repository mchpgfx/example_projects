set(DEPENDENT_MP_BIN2HEXGFX_Sim_PinyinKeyboard_default_b03nhQ0e "c:/Program Files/Microchip/xc32/v5.10/bin/xc32-bin2hex.exe")
set(DEPENDENT_DEPENDENT_TARGET_ELFGFX_Sim_PinyinKeyboard_default_b03nhQ0e ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GFX_Sim_PinyinKeyboard/default.elf)
set(DEPENDENT_TARGET_DIRGFX_Sim_PinyinKeyboard_default_b03nhQ0e ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GFX_Sim_PinyinKeyboard)
set(DEPENDENT_BYPRODUCTSGFX_Sim_PinyinKeyboard_default_b03nhQ0e ${DEPENDENT_TARGET_DIRGFX_Sim_PinyinKeyboard_default_b03nhQ0e}/${sourceFileNameGFX_Sim_PinyinKeyboard_default_b03nhQ0e}.c)
add_custom_command(
    OUTPUT ${DEPENDENT_TARGET_DIRGFX_Sim_PinyinKeyboard_default_b03nhQ0e}/${sourceFileNameGFX_Sim_PinyinKeyboard_default_b03nhQ0e}.c
    COMMAND ${DEPENDENT_MP_BIN2HEXGFX_Sim_PinyinKeyboard_default_b03nhQ0e} --image ${DEPENDENT_DEPENDENT_TARGET_ELFGFX_Sim_PinyinKeyboard_default_b03nhQ0e} --image-generated-c ${sourceFileNameGFX_Sim_PinyinKeyboard_default_b03nhQ0e}.c --image-generated-h ${sourceFileNameGFX_Sim_PinyinKeyboard_default_b03nhQ0e}.h --image-copy-mode ${modeGFX_Sim_PinyinKeyboard_default_b03nhQ0e} --image-offset ${addressGFX_Sim_PinyinKeyboard_default_b03nhQ0e} 
    WORKING_DIRECTORY ${DEPENDENT_TARGET_DIRGFX_Sim_PinyinKeyboard_default_b03nhQ0e}
    DEPENDS ${DEPENDENT_DEPENDENT_TARGET_ELFGFX_Sim_PinyinKeyboard_default_b03nhQ0e})
add_custom_target(
    dependent_produced_source_artifactGFX_Sim_PinyinKeyboard_default_b03nhQ0e 
    DEPENDS ${DEPENDENT_TARGET_DIRGFX_Sim_PinyinKeyboard_default_b03nhQ0e}/${sourceFileNameGFX_Sim_PinyinKeyboard_default_b03nhQ0e}.c
    )
