/*
Scrivere un programma che, dato un numero in ingresso
ne stampi tutti i suoi divisori.
*/

#include <iostream>

void stampadivisori(int n){
    std::cout<<"I divisori di "<<n<<" sono:"<<std::endl;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            std::cout<<i<<" ";
        }
    }
    std::cout<<std::endl;
}

int main() {

    int num = 0;
    std::cout<<"Inserisci un numero: ";
    std::cin>>num;

    stampadivisori(num);

    return 0;
}