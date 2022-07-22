#include <gtest/gtest.h>

#include <currency/include/dollar.hpp>
#include <currency/include/frank.hpp>

TEST(currency_test, BasicObjectTest)
{
    Dollar five;
    EXPECT_EQ(five.amount(), 0);
    five = 5;
    EXPECT_EQ(five.amount(), 5);
    EXPECT_EQ(10, five.times(2));
}

TEST(currency_test, EqualityTest)
{
    Dollar five(5);
    Dollar five2(5);
    Dollar notFive(2);
    Dollar empty;
    EXPECT_EQ(five, five2);
    // EXPECT_EQ(empty, 0); // TODO: why it doesnt pass?
    EXPECT_EQ(empty, Dollar(0));
    EXPECT_NE(five, empty);
}
TEST(currency_test, DiffCurrencies)
{
    Dollar fd(5);
    Frank  ff(5);
    EXPECT_NE(ff, fd);
    EXPECT_NE(fd, ff);
}