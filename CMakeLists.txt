cmake_minimum_required(VERSION 3.26)
project(mugicha)

set(CMAKE_CXX_STANDARD 14)

include_directories(CPP-Primer)

add_executable(mugicha
        CPP-Primer/variables.cpp
        CPP-Primer/variables.h
)
