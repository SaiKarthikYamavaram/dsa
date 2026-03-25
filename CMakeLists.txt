cmake_minimum_required(VERSION 3.20)
project(dsa)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE CPP_SOURCES "src/main/cpp/*.cpp")

foreach(source ${CPP_SOURCES})
    get_filename_component(target_name ${source} NAME_WE)
    add_executable(${target_name} ${source})
endforeach()
