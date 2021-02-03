// Derleme MacOs: g++ -std=c++11 -pthread main.cpp -o main
#include <iostream>
#include<thread>
#include<chrono>

class Deneme{
    public:
    static bool devam; // declaration

    void operator()(int a){
        while(!devam){
            std::cout<<"Merhaba "<<a<<std::endl;
            std::__libcpp_thread_sleep_for(std::chrono::milliseconds(500));
        }
    };
};
bool Deneme::devam; // definition 

int main()
{
    Deneme dn;
    std::thread th1(Deneme(),10);
    std::cin.get();
    Deneme::devam=true;
    th1.join();


}