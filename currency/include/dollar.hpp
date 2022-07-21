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

private:
    int amount_{ 0 };
};

#endif