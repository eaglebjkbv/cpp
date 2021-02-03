#include <iostream>
#include "IslemDll.h"

__stdcall void hello(const char *s)
{
        std::cout<< "Merhaba"<<std::endl;
}
int topla(int x,int y)
{
    return x+y;
}


