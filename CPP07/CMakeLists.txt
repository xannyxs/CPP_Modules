cmake_minimum_required(VERSION 3.22)
project(CPP07)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/whatever.h)

add_executable(ex01
        ex01/main.cpp
        ex01/Iter.h)

add_executable(ex02
        ex02/main.cpp
        ex02/Array.h
        )
