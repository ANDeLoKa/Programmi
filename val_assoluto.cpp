#include <iostream>

int main() {

    int a, b;
    std::cin>>a>>b;

    // es: a=5 b=4 --> 1 * ( 1 - 0 ) = 1
    // es: a=3 b=10 --> -7 * (0 - 1) = 7
    int ris = (a-b) * ( (a>b) - (b>a) ); 

    std::cout<<"risultato: "<<ris<<std::endl;

    return 0;
}