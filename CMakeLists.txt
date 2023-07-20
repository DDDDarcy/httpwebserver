cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hello VERSION 1.0)
add_executable(hello src/main.cpp)

add_subdirectory(module1)
add_subdirectory(src)

target_link_libraries(hello 
    httpsuport
    Reactor
)
