#ifndef __DOLLAR_H__
#define __DOLLAR_H__
#include "money.hpp"
class Dollar : public Money
{
public:
    Dollar(int val = 0);
    bool operator==(const Dollar& rhs) const { return Money::operator==(rhs); }

    bool operator!=(const Dollar& rhs) const { return amount_ != rhs.amount_; }

    template <typename T>
    bool operator==(const T& rhs) const { return false; }
    template <typename T>
    bool operator!=(const T& rhs) const { return true; }
};

#endif