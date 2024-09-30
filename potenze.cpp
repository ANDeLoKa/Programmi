#include <iostream>
using namespace std;

int main() {

    int base, esponente;
    cout<<"Inserisci il valore della base: ";
    cin>>base;
    do{
        cout<<"Inserisci il valore dell'esponente: ";
        cin>>esponente;
    }while(esponente < 1);

    int out = 1;
    for(int i = 1; i <= esponente; i++) {

        out = out * base;
        cout<<out<<endl;
    }

    return 0;
}