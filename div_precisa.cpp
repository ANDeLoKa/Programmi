#include <iostream>
#include <cmath>
using namespace std;


void dividi(int a, int b, int prec, int* ris){

    int molt = pow(10, prec);
    
    ris[0] = a*molt;
    ris[0] /= b;
    ris[0] /= molt;

    ris[1] = ris[0] % b;
}


int main(){

    int a, b, prec;
    do{
        cout<<"Insersci il valore di a e b: "<<endl;
        cin>>a>>b;

        cout<<"Inserisci la precisione della divisione: ";
        cin>>prec;
    }while(b == 0 || prec < 1);

    int int_resto[2] = {0, 0};
    dividi(a, b, prec, int_resto);

    cout<<"La divisione "<<a<<"/"<<b<<" vale: "<<int_resto[0]<<"."<<int_resto[1]<<endl;

    return 0;
}