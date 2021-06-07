include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
  )

FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB_RECURSE SOURCES *.cpp)

add_executable(test_{{cookiecutter.project_name}} ${SOURCES})

target_link_libraries(test_{{cookiecutter.project_name}} {{cookiecutter.project_name}} gtest_main)

include(GoogleTest)
gtest_discover_tests(test_{{cookiecutter.project_name}})

add_custom_command(TARGET test_{{cookiecutter.project_name}} POST_BUILD COMMAND ctest)
