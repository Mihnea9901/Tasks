#ifndef PIZZA_FACTORY_H
#define PIZZA_FACTORY_H
#include "Pizza.h"

class PizzaFactory{

    public:
    virtual Pizza* createPizza() = 0;

    
};

#endif