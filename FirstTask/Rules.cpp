#include <iostream>
/*rule of three
1.destructor definit
2.copy constructor definit
3.copy operator definit
*/

/*rule of five
rule of three +
4.move constructor
5.move operator
*/

class Rules {
    public:
    //constructor
    Rules(int value){
    data = new int(value);
    }
    //destructor
    ~Rules(){
        delete data;
    }
    //copy constructor
    Rules(const Rules& other){
        data = new int(*other.data);
    }
    //copy operator
    Rules& operator = (const Rules& other){
        if(this != &other){
            *data =*other.data;
        }
        return *this;
    }
    //move constructor
        Rules(Rules&& other) noexcept : data(other.data){
        other.data = nullptr;
    }

    //move operator
    Rules& operator = (Rules&& other) noexcept {
        if(this != &other){
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    void setVal(int val){
        *data = val;
    }
    int* getVal(){
        return data;
    }
    static void sum(){
        int a=5, b=10;
        std::cout << "sum is " << a+b << std::endl;
    }
    private:
    int* data;
};
