#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "game.h"

GTEST_TEST(MyTestSuite, CheckForThis)
{
    auto game = Game();
    ASSERT_EQ(5, game.size());
}