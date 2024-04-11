#include "Car.h"

/* reguli Singleton
    1. constructori private
    2. delete la copy constructor
    3. static ref catre obiect
    4. static method pentru a returna ref-ul(pct3)
*/


class Audi : public Car{

    private:
    Audi(){}
    //constructor pentru clasa normala care mosteneste Car
    //Audi(std::string fuel, std::string body, std::string transmission,
    //     double power, std::string equipment, std::string *vinNumber) : Car(fuel, body, transmission, power, equipment, vinNumber){}
    ~Audi(){
        std::cout << "Audi destructor called" << std::endl;
    }
    public:
    std::string fuel;
    std::string body; 
    std::string transmission;
    double power;
    std::string equipment;
    std::string *vinNumber;
    //metoda statica pentru a returna ref
    static Audi& get_instance(){
        //static ref catre obiect
        static Audi instance;
        return instance;
    }
    //delete copy constructor
    Audi(const Audi&) = delete;
    void getInfo() override;
    
};