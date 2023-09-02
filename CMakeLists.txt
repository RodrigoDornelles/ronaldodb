cmake_minimum_required(VERSION 3.5)

project(ronaldodb C)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_library("ronaldodb" OBJECT "${CMAKE_CURRENT_SOURCE_DIR}/src/ronaldodb.c")

add_executable("ronaldo" "${CMAKE_CURRENT_SOURCE_DIR}/main.c")

target_link_libraries("ronaldo" "ronaldodb")
