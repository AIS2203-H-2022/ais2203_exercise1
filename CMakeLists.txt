cmake_minimum_required(VERSION 3.15)
project(exercise1)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(exercise1 main.cpp)
target_link_libraries(exercise1 PUBLIC personlib)
