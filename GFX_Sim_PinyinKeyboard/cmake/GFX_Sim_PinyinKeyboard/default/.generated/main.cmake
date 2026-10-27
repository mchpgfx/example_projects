include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(GFX_Sim_PinyinKeyboard_default_library_list )

# Handle files with suffix s, for group default-XC32
if(GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_assemble)
add_library(GFX_Sim_PinyinKeyboard_default_default_XC32_assemble OBJECT ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_assemble})
    GFX_Sim_PinyinKeyboard_default_default_XC32_assemble_rule(GFX_Sim_PinyinKeyboard_default_default_XC32_assemble)
    list(APPEND GFX_Sim_PinyinKeyboard_default_library_list "$<TARGET_OBJECTS:GFX_Sim_PinyinKeyboard_default_default_XC32_assemble>")

endif()

# Handle files with suffix S, for group default-XC32
if(GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_assembleWithPreprocess)
add_library(GFX_Sim_PinyinKeyboard_default_default_XC32_assembleWithPreprocess OBJECT ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_assembleWithPreprocess})
    GFX_Sim_PinyinKeyboard_default_default_XC32_assembleWithPreprocess_rule(GFX_Sim_PinyinKeyboard_default_default_XC32_assembleWithPreprocess)
    list(APPEND GFX_Sim_PinyinKeyboard_default_library_list "$<TARGET_OBJECTS:GFX_Sim_PinyinKeyboard_default_default_XC32_assembleWithPreprocess>")

endif()

# Handle files with suffix [cC], for group default-XC32
if(GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_compile)
add_library(GFX_Sim_PinyinKeyboard_default_default_XC32_compile OBJECT ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_compile})
    GFX_Sim_PinyinKeyboard_default_default_XC32_compile_rule(GFX_Sim_PinyinKeyboard_default_default_XC32_compile)
    list(APPEND GFX_Sim_PinyinKeyboard_default_library_list "$<TARGET_OBJECTS:GFX_Sim_PinyinKeyboard_default_default_XC32_compile>")

endif()

# Handle files with suffix cpp, for group default-XC32
if(GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_compile_cpp)
add_library(GFX_Sim_PinyinKeyboard_default_default_XC32_compile_cpp OBJECT ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_compile_cpp})
    GFX_Sim_PinyinKeyboard_default_default_XC32_compile_cpp_rule(GFX_Sim_PinyinKeyboard_default_default_XC32_compile_cpp)
    list(APPEND GFX_Sim_PinyinKeyboard_default_library_list "$<TARGET_OBJECTS:GFX_Sim_PinyinKeyboard_default_default_XC32_compile_cpp>")

endif()

# Handle files with suffix [cC], for group default-XC32
if(GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_dependentObject)
add_library(GFX_Sim_PinyinKeyboard_default_default_XC32_dependentObject OBJECT ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_dependentObject})
    GFX_Sim_PinyinKeyboard_default_default_XC32_dependentObject_rule(GFX_Sim_PinyinKeyboard_default_default_XC32_dependentObject)
    list(APPEND GFX_Sim_PinyinKeyboard_default_library_list "$<TARGET_OBJECTS:GFX_Sim_PinyinKeyboard_default_default_XC32_dependentObject>")

endif()


# Main target for this project
add_executable(GFX_Sim_PinyinKeyboard_default_image_b03nhQ0e ${GFX_Sim_PinyinKeyboard_default_library_list})

set_target_properties(GFX_Sim_PinyinKeyboard_default_image_b03nhQ0e PROPERTIES
    OUTPUT_NAME "default"
    SUFFIX ".elf"
    RUNTIME_OUTPUT_DIRECTORY "${GFX_Sim_PinyinKeyboard_default_output_dir}")
target_link_libraries(GFX_Sim_PinyinKeyboard_default_image_b03nhQ0e PRIVATE ${GFX_Sim_PinyinKeyboard_default_default_XC32_FILE_TYPE_link})
# Add the link options from the rule file.
GFX_Sim_PinyinKeyboard_default_link_rule( GFX_Sim_PinyinKeyboard_default_image_b03nhQ0e)

# Add bin2hex target for converting built file to a .hex file.
string(REGEX REPLACE [.]elf$ .hex GFX_Sim_PinyinKeyboard_default_image_name_hex ${GFX_Sim_PinyinKeyboard_default_image_name})
add_custom_target(GFX_Sim_PinyinKeyboard_default_Bin2Hex ALL
    COMMAND ${MP_BIN2HEX} \"${GFX_Sim_PinyinKeyboard_default_output_dir}/${GFX_Sim_PinyinKeyboard_default_image_name}\"
    BYPRODUCTS ${GFX_Sim_PinyinKeyboard_default_output_dir}/${GFX_Sim_PinyinKeyboard_default_image_name_hex}
    COMMENT "Convert built file to .hex")
add_dependencies(GFX_Sim_PinyinKeyboard_default_Bin2Hex GFX_Sim_PinyinKeyboard_default_image_b03nhQ0e)




