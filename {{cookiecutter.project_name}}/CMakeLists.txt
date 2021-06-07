cmake_minimum_required(VERSION 3.14)
project(soso_{{cookiecutter.project_name}})

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

include(cmake/ConfigureCompiler.cmake)

add_subdirectory(src)
add_subdirectory(test)
