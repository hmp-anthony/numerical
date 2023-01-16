cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
project(numerical)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

include(cmake/FetchAutodiff.cmake)

add_subdirectory(examples)
