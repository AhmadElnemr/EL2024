#include <iostream>

int main()
{
    /*A program to print the ASCII table*/
    std::cout<<"============ ASCII Table ============"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"+--------+---------+"<<std::endl;
    std::cout<<"|  CHAR  |  ASCII  |"<<std::endl;
    std::cout<<"+--------+---------+"<<std::endl;
    
    for(int i=33 ; i<127 ; i++)
    {
        if(i<=99)
        {
            std::cout<<"|   "<<i<<"   |    "<<char(i)<<"    |"<<std::endl;
        }
        else
        {
            std::cout<<"|   "<<i<<"  |    "<<char(i)<<"    |"<<std::endl;
        }
    }
    std::cout<<"+--------+---------+"<<std::endl;
    
    return 0;
}