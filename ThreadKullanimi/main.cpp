// Dereleme : g++ main.cpp -o main
#include <iostream>
#include <thread>
#include <chrono>

bool bitti=false;
bool bitti2=false;


void deneme(int a)
{
    while(!bitti){
        std::cout<<"Thread Calisiyor : "<< a <<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

}

int main(){
// deneme fonksiyon pointerinin gösterdiği fonksiyonunu çağır. çağır.parametre oleak 3 gönder...
std::thread th1(deneme,3);
// Lambda kullanarak thread çalıştırma
auto fonk=[](int a){
    while(!bitti2){
        std::cout<<"Thread 2 Calisiyor : "<< a <<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
};
std::thread th2(fonk,5);
// thread lambda direkt constructura gömmek
std::thread th3([](int a){
    while(!bitti2){
        std::cout<<"Thread 3 Calisiyor : "<< a <<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
},8);
// main fonksiyondaki döngü
for(int i=1;i<10;i++){
    std::cout<<"Mainden merhaba"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

}

std::cin.get();
bitti=true;
bitti2=true;
// th1 thread inin bitmesini bekle
th3.join();
th2.join();
th1.join();



}