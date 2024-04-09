#include <iostream>
#include </home/projectx/accademyprojects/FirstTask/Opel.h>
#include </home/projectx/accademyprojects/FirstTask/Audi.h>
#include </home/projectx/accademyprojects/FirstTask/Rules.cpp>
#include <memory>

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
    
    //unique ptr
    //nu poate fi folosit de catre alt pointer(dar poate fi copiat cu move())
    std::unique_ptr<Opel> newOpel(new Opel());
    newOpel->getInfo();

    //shared ptr
    //te lasa sa faci copie la pointer si are use_count() pentru a vedea cati pointeri sunt la adresa respectiva
    std::shared_ptr<Opel> opel3 = std::make_shared<Opel>();
    std::shared_ptr<Opel> opel4 = opel3;
    opel3->getInfo();
    opel4->getInfo();

    std::cout << "opel3 count: " << opel3.use_count() << std::endl;
    std::cout << "opel4 count: " << opel4.use_count() << std::endl;

    //weak ptr
    //este folosit impreuna cu shared ptr, nu are use_count()
    //si este folosit pentru a iesi dintr-un deadlock, unde pointerii pointeaza intre ei la infinit
    std::shared_ptr<Opel> opel5 = std::make_shared<Opel>();
    std::weak_ptr<Opel> opel6;
    opel6 = opel5;
    //daca apelam reset lock() nu va mai returna nimic
    opel5.reset();
    //lock returneaza un sharedptr din weakptr-ul creat
    if(auto sharedPtr = opel6.lock()){
    //putem apela functia daca ptr-ul nu a fost sters
    sharedPtr->getInfo();
    }else{
        std::cout << "ptr-ul a fost sters";
    }

    return 0;
}