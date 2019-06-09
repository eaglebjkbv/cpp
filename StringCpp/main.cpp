#include <iostream>


int main(){
   char* kelime=(char *)"Merhaba";
    

    for(int i=0;i<sizeof(kelime);i++){
        char c=kelime[i];
        std::cout<<c<<std::endl;

    }

    std::cout<< kelime <<std::endl;


}
