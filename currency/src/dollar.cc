#include "dollar.hpp"
Dollar::Dollar(int val)
    : amount_(val)
{
}

int Dollar::amount() const
{
    return amount_;
}
void Dollar::times(int val)
{
    amount_ *= val;
}
Dollar& Dollar::operator=(int val)
{
    amount_ = val;
    return *this;
}