# Copyright (c) 2024 Samy Francelet

cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(matter_logic LANGUAGES C)

target_sources(matter_logic PRIVATE src/main.c)