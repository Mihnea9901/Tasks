#include <iostream>

class Car {
   public:
      // pure virtual function
      virtual double getInfo() = 0;
      
   private:
      std::string fuel;
      std::string body;
      std::string transmission;
      double power;
      std::string equipment;
      std::string *vinNumber;
};