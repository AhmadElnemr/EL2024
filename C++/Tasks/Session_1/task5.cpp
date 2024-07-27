#include <iostream>

int main()
{
    /*A program to print the multiplication table*/

    /*the multiplication table is consisting of rows and coloms*/
    for(int i=1 ; i<13 ; i++) //iterate through each row
    {
        for(int j=1 ; j<13 ; j++) //iterate through each colom
        {
            std::cout<<i<<"*"<<j<<"="<<i*j;
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}