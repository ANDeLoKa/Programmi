#include <iostream>

int main() {

    int in = 0;

    std::cout<<"Inserisci un numero: ";
    std::cin>>in;

    if(in % 2 == 0) {
        std::cout<<"Pari."<<std::endl;
    }
    else {
        std::cout<<"Dispari."<<std::endl;
    }

    return 0;
}