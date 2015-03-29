# cotire example project

cmake_minimum_required(VERSION 2.8.12)

project (CotireExample)

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")

include(cotire)

add_subdirectory(src)
