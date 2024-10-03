#include <iostream>
using namespace std;

int main() {

    int altezza = 0;
    do {
        cout<<"Inserisci l'altezza del triangolo: ";
        cin>>altezza;

        if(altezza < 1) {
            cout<<"Valore non valido, riprova."<<endl;
        }
    }while(altezza < 1);

    int temp = altezza - 1;
    for(int row = 0; row < altezza; row++) {
        for(int col = temp; col > 0; col--) {
            cout<<" ";
        }
        temp--;
        
        for(int volte = 2*row+1; volte > 0; volte--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}