#include <iostream>

int main()
{


    int n1,n2,n3;
    std::cout<<"Podaj 3 liczby oddzielone spacja\n";
    std::cin>>n1>>n2>>n3;

    //rozwiazanie 1
    if ((n1>=n2) && (n1>=n3)) std::cout<<"Liczba najwieksza to " << n1;
    else if ((n2>=n1) && (n2>=n3)) std::cout<<"Liczba najwieksza to " << n2;
    else if ((n3>=n1) && (n3>=n2)) std::cout<<"Liczba najwieksza to " << n3;
    std::cout<<"\n kolejne \n";

    //rozwiazanie2
    if (n1>=n2)
    {
        if (n1>=n3) std::cout<<"Liczba najwieksza to " << n1;
    }
    else if (n2>=n3) std::cout<<"Liczba najwieksza to " << n2;
    else std::cout<<"Liczba najwieksza to " << n3;
    std::cout<<"\n kolejne \n";
    
    //rozwiaznie3
    if (n1-n2>=0)
    {
        if (n1-n3>=0) std::cout<<"Liczba najwieksza to " << n1;
    }
    else if (n2-n3>=0) std::cout<<"Liczba najwieksza to " << n2;
    else std::cout<<"Liczba najwieksza to " << n3;

}