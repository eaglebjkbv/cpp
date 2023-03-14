#include <iostream>

int main()
{
    int val=0x51504f4e;
    void* ptr=&val;
    std::cout<<"Pointer Adresi : "<<*(char*)ptr<<std::endl;

}