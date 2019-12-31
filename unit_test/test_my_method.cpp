#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "my_method.h"

GTEST_TEST(MyTestSuite, CheckForThis)
{
    auto a = my_method();
    ASSERT_EQ(5, a.size());
    std::cout << "I am done." << std::endl;
}