#include <iostream>

int main()
{
    /*Max number between 3 values*/
    int x=0;
    int y=0;
    int z=0;

    std::cout<<"Enter three numbers: ";
    std::cin>>x>>y>>z;

    if(x>y && x>z)
    {
        std::cout<<std::endl<<x<<" is the biggest."<<std::endl;
    }
    else if(y>x && y>z)
    {
        std::cout<<std::endl<<y<<" is the biggest."<<std::endl;
    }
    else
    {
        std::cout<<std::endl<<z<<" is the biggest."<<std::endl;
    }

    return 0;
}