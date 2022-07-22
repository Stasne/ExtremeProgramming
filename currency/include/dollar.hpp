#ifndef __DOLLAR_H__
#define __DOLLAR_H__

class Dollar
{
public:
    Dollar() = default;
    Dollar(int val);
    int     amount() const;
    void    times(int val);
    Dollar& operator=(int val);
    bool    operator==(const Dollar& rhs) const { return amount_ == rhs.amount_; }
    bool    operator!=(const Dollar& rhs) const { return amount_ != rhs.amount_; }

    friend bool operator==(const Dollar& lhs, int rhs) { return lhs.amount() == rhs; }
    friend bool operator!=(const Dollar& lhs, int rhs) { return lhs.amount() != rhs; }

private:
    int amount_{ 0 };
};

#endif