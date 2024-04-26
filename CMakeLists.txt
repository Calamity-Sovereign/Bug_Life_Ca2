cmake_minimum_required(VERSION 3.27)
project(Bug_Life_Ca1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bug_Life_Ca1 main.cpp
        BugClass.cpp
        BugClass.h
        cmake-build-debug/Hopper.cpp
        cmake-build-debug/Hopper.h
        Crawler.cpp
        Crawler.h
)
