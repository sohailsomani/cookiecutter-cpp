#include "soso/{{cookiecutter.project_name}}.hpp"
#include "gtest/gtest.h"

TEST(HelloTest, BasicTest) {
  EXPECT_STREQ(hello(), "world");
}
