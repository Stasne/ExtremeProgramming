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

TEST(currency_test, EqualityTest)
{
    Dollar five(5);
    Dollar five2(5);
    Dollar notFive(2);
    Dollar empty;
    EXPECT_EQ(five, five2);
    EXPECT_EQ(empty, 0);
    EXPECT_NE(five, notFive);
    EXPECT_NE(five, empty);
}