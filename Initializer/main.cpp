#include <iostream>

class Deneme{

public:
    int x,y;
    Deneme()
    :x(0),y(0) // Initializer
    {   
        /*
        this->x=1;
        this->y=1;
        */
    }
    Deneme(int x,int y)
    :x(x),y(y) //Initializer
    {

    }
    void ekranaYaz(){
        std::cout<<"X Sayısı : "<< x<<" Y Sayısı : "<< y<<std::endl;
    }
};
int main(){
    Deneme d1;
    d1.ekranaYaz();
    Deneme d2(10,20);
    d2.ekranaYaz();
    std::cin.get();
}
