#include <iostream>
#include <cmath>
using namespace std;

void normalizza(double*);
double calcola_norma(double*);
double prodottoscalare(void*, void*);

int main(){

    double vett[3] = {0,0,0};
    cout<<"Inserisci le componenti del vettore:"<<endl;
    cin>>vett[0]>>vett[1]>>vett[2];

    cout<<"Vettore inserito: v=("<<vett[0]<<", "<<vett[1]<<", "<<vett[2]<<")."<<endl;
    normalizza(vett);
    cout<<"Vettore normalizzato: v=("<<vett[0]<<", "<<vett[1]<<", "<<vett[2]<<")."<<endl;
    return 0;
}

double prodottoscalare(double* v1, double* v2){

    double prdslr = 0.0;
    for(int i = 0; i < 3; i++){
        prdslr += (v1[i]*v2[i]);
    }
    return prdslr;
}

double calcola_norma(double* vett){
    
    double norma = sqrt(prodottoscalare(vett, vett));
    return norma;
}

void copia_array(double a[], double b[]){
    for(int i = 0; i < 3; i++){
        a[i] = b[i];
    }
}

void normalizza(double vett[]){

    double temp[3];
    copia_array(temp, vett);
    double norma = calcola_norma(vett);
    for(int i = 0; i < 3; i++){
        vett[i] = temp[i] / norma;
    }

}