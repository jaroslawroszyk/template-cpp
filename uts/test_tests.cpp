#include <gtest/gtest.h>
#include "../include/test.hpp"

TEST(INIT_TEST, Test_2_plus_2)
{
    EXPECT_EQ(add(2,2),4);
}