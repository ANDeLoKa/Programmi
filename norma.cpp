#include <iostream>
#include <cmath>
using namespace std;

void calcola_norma(double*);
double prodottoscalare(void*, void*);

int main(){
    
    double vett[3] = {0,0,0};
    cout<<"Inserisci le componenti del vettore:"<<endl;
    cin>>vett[0]>>vett[1]>>vett[2];
    cout<<"Vettore inserito: v=("<<vett[0]<<", "<<vett[1]<<", "<<vett[2]<<")."<<endl;

    calcola_norma(vett);
    return 0;
}

double prodottoscalare(double* v1, double* v2){

    double prdslr = 0.0;
    for(int i = 0; i < 3; i++){
        prdslr += (v1[i]*v2[i]);
    }
    return prdslr;
}

void calcola_norma(double* vett){
    
    double norma = sqrt(prodottoscalare(vett, vett));
    cout<<"La norma del vettore v e' pari a: "<<norma<<endl;
}