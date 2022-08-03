#include "bank.hpp"

#include <mutex>
static std::mutex M;

std::unique_lock<std::mutex> locker()
{
    return std::unique_lock<std::mutex>{ M };
}

void Bank::foo() const
{
    std::cout << "Hello";
}