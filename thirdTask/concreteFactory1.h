#ifndef CONCRETE_FACTORY_1_H
#define CONCRETE_FACTORY_1_H
#include "Pizza.h"
#include "PizzaFactory.h"
#include "Pizza1.h"

class ConcreteFactory1 : public PizzaFactory{
    public:
    Pizza* createPizza() override
    {
        return new Pizza1();
    }
};


#endif