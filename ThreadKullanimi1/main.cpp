#include <iostream>
#include <chrono>
#include <thread>

class myClass
{
    public :
    static bool bitti;

    static void Test(int a){

        while(!bitti){
            std::cout<<"Thread 1 den merhaba "<<a<<std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }

    }
    
    
};
class myClass2
{
    public:
    void operator()(bool dur)
    {
        while(!dur){
             std::cout<<"Thread 2 den merhaba "<<std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }
    }
};



bool myClass::bitti=false;

int main(){
    
    myClass cs;
    myClass2 cs2;
    std::thread th1(myClass::Test,10);
    std::thread th2(cs2,false);
    std::cin.get();
    cs2.operator()(true);
    cs.bitti=true;    
    
    th2.join();
    th1.join();
}