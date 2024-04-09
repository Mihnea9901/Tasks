#include "Audi.h"
#include <iostream>

void Audi::getInfo()
{
    std::cout << "This car is an Audi" << std::endl;
    std::cout << fuel << std::endl;
    std::cout << body << std::endl;
    std::cout << transmission << std::endl;
    std::cout << power << std::endl;
    std::cout << equipment << std::endl;
    std::cout << *vinNumber << std::endl;

}