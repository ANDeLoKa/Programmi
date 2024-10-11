#include <iostream>
#include <cmath>
//using namespace std;


#define MAX 10
#define MIN 1

void genera_array(int*, int);
void stampa_array(int*, int);
int cerca_corrispondenze(int*, int, int, int);
void rimuovi(int*, int, int*, int);

int main() {

    srand(time(NULL));

    int dim = 0;
    do {
        std::cout<<"Inserisci la dimensione dell'array da inizializzare: ";
        std::cin>>dim;
    } while(dim < 1);
    int v_in[dim];
    
    genera_array(v_in, dim);
    std::cout<<"Array generato:"<<std::endl;
    stampa_array(v_in, dim);

    int num = 0;
    std::cout<<"Inserisci il numero da eliminare: ";
    std::cin>>num;

    int c_trovate = cerca_corrispondenze(v_in, dim, num, 0);
    std::cout<<"Corrispondenzze trovate: "<<c_trovate<<std::endl;

    int v_out[dim-c_trovate];
    rimuovi(v_in, dim, v_out, num);
    std::cout<<"Array modificato:"<<std::endl;
    stampa_array(v_out, dim-c_trovate);

    return 0;
}

void genera_array(int a[], int d){
    for(int i = 0; i < d; i++){
        a[i] = (rand() % MAX) + MIN;
    }
}

void stampa_array(int a[], int d){
    for(int i = 0; i < d; i++){
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
}

int cerca_corrispondenze(int a[], int d, int num, int pos){
    int trovati = 0;
    if(pos < d){
        if(a[pos] == num){
            trovati++;
        }
        trovati += cerca_corrispondenze(a, d, num, pos+1);
    }
    return trovati;
}

void rimuovi(int a[], int d, int b[], int num){
    int offset = 0;
    for(int i = 0; i < d; i++){
        if(a[i] != num){
            b[i-offset] = a[i];
        }
        else{
            offset++;
        }
    }
}