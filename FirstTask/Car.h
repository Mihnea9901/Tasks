#pragma once
#include <iostream>

class Car {
   public:
      Car(){};
      Car(std::string fuel, std::string body, std::string transmission,
         double power, std::string equipment, std::string *vinNumber){
            this->fuel = fuel;
            this->body = body;
            this->transmission = transmission;
            this->power = power;
            this-> equipment = equipment;
            this->vinNumber = vinNumber;
         }
      // pure virtual function
      virtual void getInfo() = 0;
      virtual ~Car(){}
   protected:
      std::string fuel;
      std::string body;
      std::string transmission;
      double power;
      std::string equipment;
      std::string *vinNumber;
};