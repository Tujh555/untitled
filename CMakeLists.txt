cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_COMPILER /opt/homebrew/bin/g++-13)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenMP REQUIRED)

add_executable(untitled main.cpp)

if (OpenMP_C_FOUND)
    set(CMAKE_CXX_FLAGS "-fopenmp")
    target_link_libraries(untitled PRIVATE ${OpenMP_C_LIBRARIES})
endif ()