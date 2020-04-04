#include <iostream>

#include "gtest/gtest.h"
#include "State.h"

GTEST_TEST(StateSuite, CheckForThis)
{
  auto a = State();
  ASSERT_EQ(5, a.size());
  std::cout << "I am done." << std::endl;
}