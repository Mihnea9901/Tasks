#include <iostream>
#include <mutex>
#include <thread>

std::mutex mutex;
int sharedVar = 0;

void incrementVar(){
    mutex.lock();
    sharedVar++;
    std::cout << "Variable incremented to: " << sharedVar << std::endl;
    mutex.unlock();
}

void decrementVar(){
    mutex.lock();
    sharedVar--;
    std::cout << "Variable decremented to: " << sharedVar << std::endl;
    mutex.unlock();
}

int main(){

    std::thread t1(incrementVar);
    std::thread t2(decrementVar);

    t1.join();
    t2.join();

    return 0;
}