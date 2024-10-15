#include <iostream>
//using namespace std;

int somma(int);
int check_somma(int);
void trasforma_input(int*);

int main() {
    int n = 0;
    std::cout<<"Inserisci un numero: ";
    std::cin>>n;

    trasforma_input(&n);
    std::cout<<"La somma continua delle cifre e': "<<check_somma(n)<<std::endl;
    return 0;
}

void trasforma_input(int* n){
    if(*n < 0){
        *n *= -1;
    }
}

int somma(int n) {
    int somma_cifre = 0;
    while(n > 0) {
        somma_cifre += (n % 10);
        n /= 10;
    }
    return somma_cifre;
}

int check_somma(int n) {
    
    int somma_cifre = somma(n);

    if(somma_cifre < 10) {
        return somma_cifre;
    }
    else {
        return check_somma(somma_cifre);
    }
}