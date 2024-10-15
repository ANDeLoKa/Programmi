#include <iostream>
#include <cctype>

void inserisci(char*, int, int);
void stampa_array(char*, int, int);
int somma_caratteri(char*, int);

int main(){

    int n = 0;
    do {
        std::cout<<"Inserisci un numero N di inserimenti: ";
        std::cin>>n;
    } while(n < 1);

    char caratteri[n];
    inserisci(caratteri, n, 0);
    std::cout<<"Valori inseriti: "<<std::endl;
    stampa_array(caratteri, n, 0);

    std::cout<<"La somma dei valori dei caratteri e': "<<somma_caratteri(caratteri, n)<<std::endl;

    return 0;
}

int somma_caratteri(char* a, int dim){
    int sum = 0;
    for(int i = 0; i < dim; i++){
        if(islower(a[i])){
            sum += 5;
        }
        else /*isupper(a[i])*/ {
            sum += 10;
        }
    }
    return sum;
}

void stampa_array(char* a, int dim, int pos){
    if(pos < dim){
        std::cout<<a[pos]<<" ";
        stampa_array(a, dim, pos+1);
    }
    else{
        std::cout<<std::endl;
    }
}

void inserisci(char* a, int dim, int pos){

    if(pos < dim){
        std::cout<<"Inserisci un carattere: ";
        std::cin>>a[pos];
        inserisci(a, dim, pos+1);
    }
}