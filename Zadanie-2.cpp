#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    if (n>0) std::cout<<"Liczba jest dodatnia";
    if (n<0) std::cout<<"Liczba jest ujemna";
    if (n==0) std::cout<<"Liczba jest zerem";
}