#include <gtest/gtest.h>

#include <currency/include/bank.hpp>

TEST(currency_test, BasicObjectTest)
{
    Money five;
    EXPECT_EQ(five.amount(), 0);
    five = 5;
    EXPECT_EQ(five.amount(), 5);
    EXPECT_EQ(10, five.times(2));
}

TEST(currency_test, EqualityTest)
{
    Bank().foo();
    Money five(5);
    Money five2(5);
    Money notFive(2);
    Money empty;
    EXPECT_EQ(five, five2);
    // // EXPECT_EQ(empty, 0); // TODO: why it doesnt pass?
    EXPECT_EQ(empty, Money(0));
    EXPECT_NE(five, empty);
}
TEST(currency_test, DiffCurrencies)
{
    Money fd(5, "USD");
    Money ff(5, "CHF");
    EXPECT_STRNE(fd.currency().c_str(), ff.currency().c_str());
    EXPECT_FALSE(fd.currency() == ff.currency());
    EXPECT_NE(ff, fd);
    EXPECT_NE(fd, ff);
}
TEST(currency_test, CurrencyChange)
{
    Money dollar;
    EXPECT_STREQ(dollar.currency().c_str(), "USD");
    dollar.setCurrency("RUR");
    EXPECT_STREQ(dollar.currency().c_str(), "RUR");
}
TEST(currency_test, Convert)
{
    Bank bank;
    bank.foo();
    Money dollar(100);
    EXPECT_EQ(bank.convertTo(dollar, "RUR"), Money(285, "RUR"));
}

TEST(currency_test, Bank)
{
    Bank  bank;
    Money fd(100, "USD");
    Money ff(100, "RUR");
    auto  sum = bank.sum(fd, ff);
    EXPECT_EQ(135, sum);
}
