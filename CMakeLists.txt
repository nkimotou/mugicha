cmake_minimum_required(VERSION 3.26)
project(mugicha)

set(CMAKE_CXX_STANDARD 14)

include_directories(simple_examples)

add_executable(mugicha
        CPP-Primer/variables.cpp
        CPP-Primer/variables.h
        simple_examples/complex_number_objects.cpp
        simple_examples/complex_number_objects.h
)
