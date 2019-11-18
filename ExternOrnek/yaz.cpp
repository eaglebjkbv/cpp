#include <iostream>

extern int z; 
static int dene=30;
void yazdir(){
    std::cout<<"Main den gelen z Sayısı:"<< z <<std::endl;
    std::cout<<"Static dene sayısı : "<< dene<<std::endl;
}