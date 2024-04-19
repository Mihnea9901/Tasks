#ifndef PIZZA2_H
#define PIZZA2_H
#include "Pizza.h"
class Pizza2 : public Pizza{
    public:
    void eatPizza() override
    {
    std::cout << "I'm eating pizza number 2" << std::endl;
    }
};
#endif