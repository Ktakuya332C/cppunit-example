cmake_minimum_required(VERSION 3.17)
enable_testing()

project(simple VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANRDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules")
find_package(CppUnit REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
