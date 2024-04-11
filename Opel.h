#include <iostream>
#include "Car.h"
#include <utility>

class Opel : public Car{
    public:
    Opel(){}

    Opel(std::string fuel, std::string body, std::string transmission,
         double power, std::string equipment, std::string *vinNumber) : Car(fuel, body, transmission, power, equipment, vinNumber){}
    
    ~Opel(){
        std::cout << "Opel destructor called" << std::endl;
    }

    void getInfo() override;

};