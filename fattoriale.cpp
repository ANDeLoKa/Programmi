#include <iostream>
using namespace std;

int fact(int num) {

    int fact = 1;

    for (int i = num; i > 0; i--){
        fact *= i;
    }

    return fact;
}

int main() {

    int in = 0;
    do {
        cout<<"Inserisci un numero positivo: ";
        cin>>in;
    }while(in < 0);

    int ris = fact(in);
    cout<<"Il fattoriale di "<<in<< " e' "<<ris<<endl;

    return 0;
}