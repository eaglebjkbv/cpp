#include <iostream>

class Post
{
protected:
    int postId;
    std::string postReceiver;
    std::string postSender;

public:
    Post(int postId, std::string postReceiver, std::string postSender)
    {
        this->postId = postId;
        this->postReceiver = postReceiver;
        this->postSender = postSender;
    }
    virtual void send(){
        std::cout<<"Post Sent to:"<< postReceiver<<std::endl; 
    }
};
class Cargo: public Post
{
private: 
    int weight;
public:
    Cargo(int postId, std::string postReceiver, std::string postSender,int weight)
    :Post(postId,postReceiver,postSender)
    {
        this->weight=weight;
    }
    void send(){
        std::cout<<"Cargo Sent to:"<< postReceiver<<" Weight is:"<<weight<<std::endl; 
    }


};

void SendEveryThing(Post* p){
    p->send();
}

int main()
{
    Post p=Post(1,"Bulent","Ahmet");
    p.send();
    Cargo c =Cargo(2,"Serra","Burak",10);
    c.send();
    Post pp=Post(3,"Serap","Mevlüt");
    SendEveryThing(&pp);
    Cargo cc=Cargo(4,"Gülen","Filiz",30);
    SendEveryThing(&cc);
}