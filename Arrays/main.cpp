#include <iostream>
struct Deneme{
    int* x=new int[5];

    void sayiEkle(){
        for(int i=0;i<5;i++)
            x[i]=i;
    }    
};

int main(){

int dizi[5];
dizi[0]=1;
dizi[1]=2;
dizi[2]=3;
dizi[3]=4;
dizi[4]=5;

for(int i=0;i<5;i++){
    std::cout<< "sayi " << i<<" ="<<dizi[i]<< std::endl;
}
std::cout<<*(dizi+4)<<std::endl;

}