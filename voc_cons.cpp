#include <iostream>
using namespace std;

int main() {

    char in;
    cout<<"Inserisci un carattere: ";
    cin>>in;

    if (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U') {
        cout<<"Il carattere inserito e' una vocale"<<endl;
    }
    else{
        cout<<"Il carattere inserito e' un consonante"<<endl;
    }


    return 0;
}