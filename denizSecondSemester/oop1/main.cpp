#include <iostream>

class Player{
    
    public:
        std::string name; // property
        int health; 
    void injure(){ // method
        health--;
        stamina++;
    }
    private:
        int stamina;
};


int main()
{
   Player p1;

    p1.name="Deniz";
    p1.health=100;
    p1.injure();
   

    Player p2;
    p2.name="Bülent";
    p2.health=200;
    p2.injure();
    
    std::cout<<p2.name<<"Healt Status ="<<p2.health<<std::endl;







}