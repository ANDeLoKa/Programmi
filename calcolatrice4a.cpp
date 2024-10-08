/*
Scrivere una funzione per la somma, una per la sottrazione,
una per la moltiplicazione e una per la divisione.
Scrivere poi una funzione calcolatrice che, passati come parametri
un carattere e due numeri, decida in base al carattere che
funzione chiamare e ne ritorni il risultato:

'a': addizione
's': sottrazione
'm': moltiplicazione
'd': divisione
*/

#include <iostream>

double addizione(double a, double b){
    return a+b;
}

double sottrazione(double a, double b){
    return a-b;
}

double moltiplicazione(double a, double b){
    return a*b;
}

double divisione(double a, double b){
    return a/b;
}

double calcolatrice(double a, double b, char op){
    
    int ris = 0;
    switch (op) {
    case 'a':
        ris = addizione(a,b);
        break;
    case 's':
        ris = sottrazione(a,b);
        break;
    case 'm':
        ris = moltiplicazione(a,b);
        break;
    case 'd':
        ris = divisione(a,b);
        break;
    
    default:
        std::cerr<<"Errore."<<std::endl;
        exit(-1);
        break;
    }
    return ris;
}

int main() {

    double a, b; char op;
    std::cout<<"Insersci un valore: ";
    std::cin>>a;
    do{
        std::cout<<std::endl;
        std::cout<<"a - addizione"<<std::endl;
        std::cout<<"s - sottrazione"<<std::endl;
        std::cout<<"m - moltiplicazione"<<std::endl;
        std::cout<<"d - divisione"<<std::endl;

        std::cout<<"Insersci l'operazione: ";
        std::cin>>op;
    }while(op != 'a' && op != 's' && op != 'm' && op != 'd');
    std::cout<<"Insersci un valore: ";
    std::cin>>b;

    std::cout<<a<<" "<<op<<" "<<b<<" = "<<calcolatrice(a, b, op);

    return 0;
}