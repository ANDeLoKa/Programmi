/*
    Scrivere un programma che chieda un carattere che identifica una
    lingua (es: 'i'= italiano, 'e'=inglese, ecc.) e scriva "buon
    giorno" nella lingua prescelta. Usare l'istruzione switch.
*/

#include <iostream>
using namespace std;

int main() {

    char lingua;

    cout<<"Lingue disponibili:"<<endl<<"e - english"<<endl<<"i - italiano"<<endl<<"s - español"<<endl<<"d - deutsch"<<endl;
    cout<<"Inserisci una lingua: ";
    cin>>lingua;
    
    switch (lingua) {
    case 'e':
        cout<<"Good Morning";
        break;
    case 'i':
        cout<<"Buon Giorno";
        break;
    case 's':
        cout<<"Buenos Dias";
        break;
    case 'd':
        cout<<"Guten Tag";
        break;
    
    default:
        cout<<"Lingua non valida."<<endl;
        break;
    }

    return 0;
}