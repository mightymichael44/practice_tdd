#include <iostream>

#include "gtest/gtest.h"
#include "StateMachine.h"

GTEST_TEST(MyTestSuite, CheckForThis)
{
  auto a = StateMachine();
  ASSERT_EQ(5, a.size());
  std::cout << "I am done." << std::endl;
}