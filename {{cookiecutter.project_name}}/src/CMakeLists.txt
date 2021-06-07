file(GLOB_RECURSE SOURCES *.cpp)

add_library({{cookiecutter.project_name}} STATIC ${SOURCES})

target_include_directories({{cookiecutter.project_name}} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
