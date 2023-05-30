#include <iostream>
#include "gtest/gtest.h"
#include "add.hpp"

TEST(INIT_TEST, Test_2_plus_2)
{
    Foo f;
    EXPECT_EQ(f.add(2,2),4);
}