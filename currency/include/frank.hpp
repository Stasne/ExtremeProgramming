#ifndef __FRANK_H__
#define __FRANK_H__

#include "money.hpp"
class Frank : public Money
{
public:
    Frank(int val = 0)
        : Money(val)
    {
    }

    bool operator==(const Frank& rhs) const { return Money::operator==(rhs); }
    bool operator!=(const Frank& rhs) const { return amount_ != rhs.amount_; }

    template <typename T>
    bool operator==(const T& rhs) const { return false; }
    template <typename T>
    bool operator!=(const T& rhs) const { return true; }

    // friend bool operator==(const Frank& lhs, int rhs) { return lhs.amount() == rhs; }
    // friend bool operator!=(const Frank& lhs, int rhs) { return lhs.amount() != rhs; }
};
#endif
