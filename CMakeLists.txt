cmake_minimum_required(VERSION 3.10)

project(sigmaserver)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(sigmaserver source/main.cpp)
target_link_libraries(sigmaserver Ws2_32.lib)