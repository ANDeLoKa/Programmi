#include <iostream>

int main() {

    int num;
    std::cout<<"Inserisci un numero intero: ";
    std::cin>>num;

    std::cout<<"Il numero precedente e': "<<(--num)<<std::endl<<"Il numero successivo e': "<<(++(++num))<<std::endl;

    return 0;
}