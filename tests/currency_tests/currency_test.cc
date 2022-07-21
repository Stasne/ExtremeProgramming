#include <gtest/gtest.h>

#include <currency/include/dollar.hpp>

TEST(currency_test, BasicObjectTest)
{
    Dollar five;
    EXPECT_EQ(five.amount(), 0);
    five = 5;
    EXPECT_EQ(five.amount(), 5);
    five.times(2);
    EXPECT_EQ(10, five.amount());
}