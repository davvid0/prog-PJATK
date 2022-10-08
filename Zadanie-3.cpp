#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    if (n==0) std::cout<<"Liczba nie jest parzysta i nie jest nieparzysta";
    else
    {
    if (((n+1)/2)==(n/2)) std::cout<<"Liczba jest parzysta";
    if (((n+1)/2)!=(n/2)) std::cout<<"Liczba jest nieparzysta";
    }

}