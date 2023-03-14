#include <iostream>
#include <memory>

class Entity
{
private:
    int x;
    int y;
public:
    Entity() :x(10),y(20){ //initializer

    }
    void setX(int x){
        this->x=x;
    }
    void setY(int y){
        this->y=y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
int main(){
    Entity e0;
    e0.setX(5);
    std::cout<<"X sayısı (from stack)= "<<e0.getX()<<std::endl;
    Entity* e1=new Entity();
    std::cout<<"Y Sayısı (pointer from Heap)= "<<e1->getY()<<std::endl;
    std::shared_ptr<Entity> e3;
    // auto e3=std::make_shared<Entity>();
    e3=std::make_shared<Entity>();
    std::cout<<"X Sayısı (from shared Pointer)= "<<e3->getX()<<std::endl;

return 1;

}