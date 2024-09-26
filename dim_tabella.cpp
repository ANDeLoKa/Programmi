#include <iostream>
using namespace std;

int main() {

    int row, col;
    cout<<"Inserisci il numero di righe e di colonne: "<<endl;
    cin>>row>>col;

    bool singola_riga_colonna = !( (row == 1) || (col == 1) );

    cout<<singola_riga_colonna;

    return 0;
}