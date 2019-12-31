#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "game.h"

GTEST_TEST(MyTestSuite, CheckForThis)
{
    auto a = game();
    ASSERT_EQ(5, a.size());
    std::cout << "I am done." << std::endl;
}