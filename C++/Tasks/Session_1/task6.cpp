#include <iostream>

int main()
{
    /*A program to print the sum of a number's digits*/
    int num=0;
    int sum=0;

    std::cout<<"Enter a number: ";
    std::cin>>num;
    std::cout<<std::endl;

    while(num!=0)
    {
        sum += (num%10);
        num /= 10;
    }

    std::cout<<"digits sum = "<<sum<<std::endl;

    return 0;
}