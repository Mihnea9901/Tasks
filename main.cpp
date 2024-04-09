#include <iostream>
#include </home/projectx/accademyprojects/FirstTask/Opel.h>
#include </home/projectx/accademyprojects/FirstTask/Audi.h>
#include </home/projectx/accademyprojects/FirstTask/Rules.cpp>

int main(void) {

    std::string audiVin = "AUDI123";
    std::string opelVin = "OPEL123";

    //Audi firstAudi("diesel", "hatchback", "AWD", 170, "luxury", &audiVin);
    Opel firstOpel("petrol", "sedan","RWD", 150, "base", &opelVin);

    //firstAudi.getInfo();
    firstOpel.getInfo();

    // instanta singleton
    Audi &audi = Audi::get_instance();
    audi.fuel = "diesel";
    audi.body = "hatchback";
    audi.transmission = "AWD";
    audi.power = 180;
    audi.equipment = "luxury";
    audi.vinNumber = &audiVin;
    audi.getInfo();

    //test copy constructor
    Rules obj1(11);
    Rules obj2 = obj1;
    obj1.setVal(22);

    std::cout << " obj1: " << *obj1.getVal() << " obj2: " << *obj2.getVal() << std::endl;

    //test copy operator
    Rules obj3(0);
    obj3 = obj1;
    obj1.setVal(33);
    std::cout << " obj1: " << *obj1.getVal() << " obj2: " << *obj2.getVal() 
              << " obj3: "<< *obj3.getVal() << std::endl;

    //test move constructor
    Rules obj4(44);
    Rules obj5 = std::move(obj4);
    
    std::cout << "obj5: " << *obj5.getVal() << std::endl;
    //test move operator
    Rules obj6(66);
    obj6 = std::move(obj5);

    std::cout << "obj6: " << *obj6.getVal() << std::endl;
    //apelare fara obj
    Rules::sum();
    
    return 0;
}