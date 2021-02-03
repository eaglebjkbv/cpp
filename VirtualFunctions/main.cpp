#include <iostream>
#include <string>

class Canli
{
    public:
    virtual std::string GetName(){
        return "No Name";
    } 
};

class Insan:public Canli
{
    private:
    std::string _mName;
    public:
        Insan(std::string name): 
            _mName(name){} 
        std::string GetName() override {
            return _mName;
        }

};
void PrintName(Canli* c){
    std::cout<< c->GetName()<<std::endl;
}

int main(){
    Canli* insan=new Insan("Bülent");
    std::cout<< insan->GetName()<<std::endl;

    Insan* i=new Insan("Ahmet");
    PrintName(i);
    Canli* c=new Canli();
    PrintName(c);

}
