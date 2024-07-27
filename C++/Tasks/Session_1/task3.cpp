#include <iostream>

int main()
{
    /*A program to print right angle triangle*/
    int rows=0;

    /*Asking the user about the number of triangle's rows*/
    std::cout<<"Number of rows = ";
    std::cin>>rows;
    std::cout<<std::endl;

    for(int i=1 ; i<=rows ; i++) //iterate for updating each row
    {
        for(int j=1 ; j<=(rows-i) ; j++) //iterrate to update the spaces of each row
        {
            std::cout<<" ";
        }
        for(int k=1 ; k<=i ; k++) //iterate to update the number of the printed starts
        {
            std::cout<<"*";
        }
        std::cout<<std::endl; //new line to update the formatting of the next line
    }

    return 0;
}