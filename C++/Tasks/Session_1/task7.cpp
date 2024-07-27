#include <iostream>
#include <bitset>
#include <string>

int main()
{
    /*A program to change from decimal to binary and vice versa*/
    int num=0;
    int choice=0;

    std::cout<<"=============== Decimal to Binary converter ==============="<<std::endl;
    std::cout<<"1- convert from decimal to binary"<<std::endl;
    std::cout<<"2- convert from binary to decimal"<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Enter a choice: ";
    std::cin>>choice;
    std::cout<<std::endl;

    if(choice == 1)
    {
        std::cout<<"Enter a decimal number: ";
        std::cin>>num;
        std::string numBinary = std::bitset<32>(num).to_string(); //convert the decimal to bitset then convert it into string
        
        std::cout<<std::endl;
        std::cout<<num<<" (decimal) = "<<numBinary<<" (binary)"<<std::endl;
    }
    else if(choice == 2)
    {
        std::cout<<"Enter a binary number: ";
        std::cin>>num;

        std::string str = std::to_string(num); //convert the binary number to string
        std::bitset<32> binaryStr(str); //convert the string into bitset
        int numDecimal = binaryStr.to_ulong(); //convert the bit set into unsigned long intger

        std::cout<<std::endl;
        std::cout<<num<<" (binary) = "<<numDecimal<<" (decimal)"<<std::endl;
    }
    else
    {
        /*error message = unavailable choice*/
        std::cout<<"ERROR: unavailable choice"<<std::endl;
    }

    return 0;

}