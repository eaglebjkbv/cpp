#include <iostream>

class Person
{
    public:
        std::string name; // properties
        std::string surname;
    private:
        int age; // encapsulation
    public:
        void setAge(int a){ //methods
            if(a>0 && a<150){
               age=a;
            }else{
                std::cout<<"Yaş 0 dan küçük olamaz veya 150 den büyük olamaz..."<<std::endl;
                age=0;
            }
        }
        int getAge(){
            return age;
        }

};
void printHello(){ //fonksiyon
    std::cout<<"Helloooo"<<std::endl;
}

int main(){

    Person p1;
    p1.name="Deniz";
    p1.surname="Vardal";
    p1.setAge(24);
    
    printHello();
    std::cout<<p1.name<<" 's age is "<<p1.getAge()<<std::endl;



}