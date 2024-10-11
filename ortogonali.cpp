#include <iostream>
using namespace std;

double prodottoscalare(double* v1, double* v2){

    double prdslr = 0.0;
    for(int i = 0; i < 3; i++){
        prdslr += (v1[i]*v2[i]);
    }
    return prdslr;
}

int main(){

    double v1[3], v2[3];
    cout<<"Inserisci le componenti del primo vettore:"<<endl;
    cin>>v1[0]>>v1[1]>>v1[2];
    cout<<"Vettore inserito: v=("<<v1[0]<<", "<<v1[1]<<", "<<v1[2]<<")."<<endl;

    cout<<"Inserisci le componenti del secondovettore:"<<endl;
    cin>>v2[0]>>v2[1]>>v2[2];
    cout<<"Vettore inserito: v=("<<v2[0]<<", "<<v2[1]<<", "<<v2[2]<<")."<<endl;

    if(prodottoscalare(v1, v2) == 0){
        cout<<"I due vettori sono ortogonali tra di loro."<<endl;
    }
    else{
        cout<<"I due vettori non sono ortogonali tra di loro."<<endl;
    }

    return 0;
}