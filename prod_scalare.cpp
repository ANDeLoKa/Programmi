#include <iostream>

#define DIM 10

void popola_array(double a[]){
    std::cout<<"Inserisci "<<DIM<<" valori double per popolare l'array."<<std::endl;
    for(int i = 0; i < DIM; i++){
        std::cout<<i<<": ";
        std::cin>>a[i];
    }
}

void stampa_array(double a[]){
    std::cout<<"========== contenuto array =========="<<std::endl;
    for(int i = 0; i < DIM; i++){
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl<<"====================================="<<std::endl<<std::endl;
    
}

double prodotto_scalare(double a[], double b[]){
    int ris = 0;
    for(int i = 0; i < DIM; i++){
        ris += (a[i] * b[i]);
    }
    return ris;
}

int main(){

    double a[DIM], b[DIM];

    popola_array(a);
    popola_array(b);

    stampa_array(a);
    stampa_array(b);

    int prodscalare = prodotto_scalare(a, b);

    std::cout<<"Il prodotto scalare tra i due array e': "<<prodscalare<<std::endl;

    return 0;
}