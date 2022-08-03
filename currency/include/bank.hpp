#ifndef __BANK_H__
#define __BANK_H__
#include <iostream>
#include <unordered_map>

#include "money.hpp"
class Bank
{
public:
    Bank() = default;
    [[no_discard]] Money sum(const Money& lhs, const Money& rhs) const
    {
        Money result;
        auto  rval = convertTo(rhs, lhs.currency());
        result.setAmount(lhs.amount() + rval);

        return result;
    }

    int convertTo(const Money& lhs, const std::string& currency) const
    {
        double divided = lhs.amount() * prices.at(lhs.currency());
        return divided / prices.at(currency);
        bar();
    }
    void foo() const;
    void bar() const
    {
        std::cout << "dsd";
    };

private:
    std::unordered_map<std::string, double> prices{
        { "USD", 1 },
        { "CHF", 1.3 },
        { "RUR", 0.35 }
    };
};

#endif // __BANK_H__