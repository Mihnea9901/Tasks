#include "singleton.h"
#include <iostream>
#include "concreteFactory1.h"
#include "concreteFactory2.h"
int main(void){

    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    if(&s1 == &s2){
        std::cout << "Ambele referinte au aceeasi instanta" << std::endl;
    }else{
        std::cout << "Referintele nu au aceeasi instanta" << std::endl;
    }

    PizzaFactory* factory1 = new ConcreteFactory1();
    Pizza* pizza1 = factory1->createPizza();
    pizza1->eatPizza();



    return 0;
}