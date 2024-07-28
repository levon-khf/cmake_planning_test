cmake_minimum_required(VERSION 3.19.0)
project(planning)
set(CMAKE_CXX_STANDARD 17)
#动态库和exe都指定到bin目录下面
set(CMAKE_RUNTIME_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#linux上动态库
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY)
##静态库
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY)

#动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(common SHARED ${SRC_LISTS})
target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

#可执行文件
add_executable(planning main.cpp)
target_include_directories(planning PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(planning PUBLIC common)

