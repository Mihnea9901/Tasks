#ifndef SINGLETON_H
#define SINGLETON_H
#include <mutex>
class Singleton{
    public:
    static Singleton& getInstance() {
        static Singleton* instance = nullptr;
        static std::mutex mutex;
        //lock blocheaza accesul de catre alt thread
        std::lock_guard<std::mutex> lock(mutex);

        return *instance;
    };

    private:
    //constructor privat pentru a preveni instantierea
    Singleton(){}
    //destructor private pentru a preveni stergerea
    ~Singleton(){}
    //delete copy constructor si assignment operator pentru a preveni duplicarea
    Singleton(const Singleton&) = delete;
    Singleton& operator = (const Singleton&) = delete;
};

#endif