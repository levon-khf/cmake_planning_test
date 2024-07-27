cmake_minimum_required(VERSION 3.19.0)
project(planning)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(. SRC_LISTS)
add_executable(${PROJECT_NAME} ${SRC_LISTS})