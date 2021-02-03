#include <iostream>
#include "islem.hpp"
int main()
{
    Islem den;
    std::cout << den.hesapla(10,20)<< std::endl;
    Islem* islem=new Islem();
    
    std::cout << islem->hesapla(9,9) << std::endl;
    Islem* islem2=new Islem(5);
    islem2->~Islem(); // alttaki satır aynı işe yarıyor 
    delete islem2; // üstteki ile aynı 
    islem2->sayi=15;
    islem2->sayiYaz(18);

    std::cin.get();
  


}