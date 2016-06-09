cmake_minimum_required(VERSION 2.6)
project(DKRL)
add_definitions(-std=gnu11)

add_executable(dkrl main.c Map.c Visualizer.c)
