#include <iostream>

class Gamer
{
public:
    static int gamers;
    Gamer()
    {

        gamers++;
        std::cout << gamers << ". Yeni oyuncu oluşturuldu" << std::endl;
    }
};
int Gamer::gamers;
int main()
{

    Gamer::gamers = 0;
    Gamer gamer1;
    Gamer gamer2;
    Gamer gamer3;
}