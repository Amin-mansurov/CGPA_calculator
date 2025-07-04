cmake_minimum_required(VERSION 3.10)
project(CGPA_calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(cgpa-calculator
    main.cpp
    src/course.cpp
)
