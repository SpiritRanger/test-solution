cmake_minimum_required(VERSION 3.18)
project(TestProject)

add_executable(TestProject source.cpp)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")

include_directories("${CMAKE_SOURCE_DIR}/Logger")

target_link_libraries(TestProject Logger)