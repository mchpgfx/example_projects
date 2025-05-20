cmake_minimum_required(VERSION 3.25.0)
project(mgsws_graphics_project)
add_executable(${CMAKE_PROJECT_NAME})
find_package(SDL2 REQUIRED)
include_directories(${CMAKE_PROJECT_NAME} ${SDL2_INCLUDE_DIRS})
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/*.c)
target_sources(${CMAKE_PROJECT_NAME} PRIVATE ${SOURCES})
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/system
    ${PROJECT_SOURCE_DIR}/gfx
    ${PROJECT_SOURCE_DIR}/app
)
target_link_libraries(${CMAKE_PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2_STATIC_LIBRARIES} ${SDL2MAIN_LIBRARY})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Og -g3 -mconsole")
add_custom_command(TARGET ${CMAKE_PROJECT_NAME} POST_BUILD
     COMMAND ${CMAKE_COMMAND} -E copy_if_different
         "${SDL2_BINDIR}/SDL2.dll"
         $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)
