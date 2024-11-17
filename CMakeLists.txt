cmake_minimum_required(VERSION 3.29)
project(taskManProj)

set(CMAKE_CXX_STANDARD 20)

add_executable(taskManProj main.cpp
        TaskManager.cpp
        TaskManager.h
        Task.cpp
        Task.h
        libConnect.h)
