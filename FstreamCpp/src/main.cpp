#include <iostream>
#include <fstream>



int main()
{
    std::fstream myfile;
    myfile.open ("example.txt",std::ios::out);
    if(myfile.is_open())
    {
        myfile << "Writing this to a file.\n";
    }
    
    myfile.close();
    return 0;
 
}