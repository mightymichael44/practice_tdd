#include <iostream>

#include "gtest/gtest.h"
#include "Action.h"

GTEST_TEST(ActionSuite, CheckForThis)
{
  auto a = Action();
  ASSERT_EQ(5, a.size());
  std::cout << "I am done." << std::endl;
}