#include <iostream>

int main()
{
    /*Vowel letters detector*/

    char c=0;
    std::cout<<"Enter a character: ";
    std::cin>>c;
    std::cout<<std::endl;

    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='o' || c=='O' || c=='u' || c=='U' || c=='i' || c=='I')
    {
        std::cout<<c<<" is vowel letter :D"<<std::endl;
    }
    else
    {
        std::cout<<c<<" is not vowel :("<<std::endl;
    }

    return 0;
}