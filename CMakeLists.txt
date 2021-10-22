cmake_minimum_required(VERSION 3.20)
project(AdvancedDataStructure)

set(CMAKE_CXX_STANDARD 23)
include_directories(headers)
link_directories(lib)

add_executable(AdvancedDataStructure main.cpp)

target_link_libraries(AdvancedDataStructure BasicDataStructure)