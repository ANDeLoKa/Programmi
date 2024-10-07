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

    int valore = 1;
    for(int row = 0; row <= altezza; row++) {
        
        for(int col = 0; col <= altezza-row; col++) {
            cout<<" ";
        }

        for(int col = 0; col <= row; col++){
            if(col == 0){
                valore = 1;
            }
            else{
                valore = valore * (row - col)/(col + 1);
            }
            cout<<valore;
        }

        cout<<endl;
    }

    return 0;
}