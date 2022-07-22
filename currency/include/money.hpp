#ifndef __MONEY_H__
#define __MONEY_H__

class Money
{
public:
    Money(int val = 0)
        : amount_(val)
    {
    }
    int    amount() const { return amount_; }
    Money& times(int val)
    {
        amount_ *= val;
        return *this;
    }

    void operator=(int val) { amount_ = val; }

    operator int() const { return amount_; }

    bool operator==(const Money& rhs) const { return amount_ == rhs.amount_; }
    bool operator!=(const Money& rhs) const { return amount_ != rhs.amount_; }
    // friend bool operator==(const Money& lhs, int rhs) { return lhs.amount() == rhs; }
    // friend bool operator!=(const Money& lhs, int rhs) { return lhs.amount() != rhs; }

protected:
    int amount_;
};

#endif