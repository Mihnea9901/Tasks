#ifndef PIZZA1_H
#define PIZZA1_H
#include "Pizza.h"
class Pizza1 : public Pizza{
    public:
    void eatPizza() override
    {
    std::cout << "I'm eating pizza number 1" << std::endl;
    }
};
#endif