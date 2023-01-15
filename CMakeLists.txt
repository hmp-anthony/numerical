cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 17)
project(numerical)

include(cmake/FetchSolvant.cmake)

add_subdirectory(examples)
