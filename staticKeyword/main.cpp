#include <iostream>

void test()
{
    static int i = 10;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    test();
    test();
    test();
}