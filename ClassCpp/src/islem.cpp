#include <iostream>
#include "islem.hpp"
// Contructor 1. overload
Islem::Islem()
{
    
}
// Constructor 1. overload
// Ekrana değeri yazdırır
Islem::Islem(int say)
{
    std::cout<< "Yapıcıya gonderilern değer "<< say << std::endl; 
}
int Islem::hesapla(int a,int b)
{
    return a+b;
};
// Deconstructor 
Islem::~Islem()
{
    std::cout<< "işlem bitti "<<std::endl;
};
void Islem::sayiYaz(int sayi)
{
    std::cout << "Sayi Değeri ="<< this->sayi <<"\nParametreye Gelen ="<< sayi << std::endl;
};