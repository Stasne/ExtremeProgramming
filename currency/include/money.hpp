#ifndef __MONEY_H__
#define __MONEY_H__
#include <string>
class Money
{
public:
    Money(int val = 0, const std::string& currency = "USD")
        : amount_(val)
        , currency_(currency)
    {
    }
    int    amount() const { return amount_; }
    void   setAmount(int val) { amount_ = val; }
    Money& times(int val)
    {
        amount_ *= val;
        return *this;
    }

    const std::string& currency() const { return currency_; };
    void               setCurrency(const std::string& currency) { currency_ = currency; }

    void operator=(int val) { amount_ = val; }

    operator int() const { return amount_; }

    bool operator==(const Money& rhs) const { return (amount_ == rhs.amount_) && (currency_ == rhs.currency_); }
    bool operator!=(const Money& rhs) const { return (amount_ != rhs.amount_) || (currency_ != rhs.currency_); }

protected:
    int         amount_;
    std::string currency_;
};

#endif