#ifndef CONCRETE_FACTORY_2_H
#define CONCRETE_FACTORY_2_H

//#include "Pizza.h"
//#include "PizzaFactory.h"
#include "Pizza2.h"
class ConcreteFactory2 : public PizzaFactory{
    public:
    Pizza* createPizza() override
    {
        return new Pizza2();
    }
};

#endif