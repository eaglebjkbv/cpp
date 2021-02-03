#include <iostream>

#define Log(x) std::cout<<x<<std::endl

int main(){

    int var=5;
    int* ptr=&var;
    *ptr=10;
    Log(var);
    
}
