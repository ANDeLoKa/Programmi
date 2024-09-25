/*
    Scrivere un programma che "indovini" un numero tra 0 e 7 facendo
    una serie di domande che richiedano risposta del tipo "s/n" all'utente.
*/

#include <iostream>
#include <cmath>
using namespace std;

void stampa_arr(int* arr, int min, int max){
    for(int i = 0; i <= max-min; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int scegli(int* arr){

    int num, pos_random;
    do {
        pos_random = rand() % 7; 
        num = arr[pos_random];
    } while (num == -1);

    cout<<num<<endl;
    stampa_arr(arr, 0, 7);

    return num;
}

int main() {

    srand(time(0));

    int const min = 0, max = 7;
    int numeri_mancanti[max-min], temp = min;
    for(int i = 0; i <= max-min; i++){
        numeri_mancanti[i] = temp;
        temp++;
    }
    
    stampa_arr(numeri_mancanti, min, max);

    int num;
    do {
        cout<<"Scegli un numero da "<<min<<" a "<<max<<": ";
        cin>>num;
    } while (num < 0 || num > 7);
    
    char ris;
    int tent;
    do {
        tent = scegli(numeri_mancanti);
        cout<<"Il tuo numero e' "<<tent<<"? ";
        cin>>ris;

        if (ris == 'n') {
            bool empty = 1;
            for(int i = 0; i <= max-min; i++){
                if(numeri_mancanti[i] != -1) {
                    empty = 0;
                }
            }
            if(empty){
                cout<<"error.";
                return -1;
            }

            for (int i = 0; i <= max-min; i++){
                if (numeri_mancanti[i] == tent){
                    numeri_mancanti[i] = -1;
                }
            }
        }
        else if (ris == 's') {
            return 0;
        }
        else {
            cout<<"error.";
            return -1;
        }

    } while (ris == 'n');
    


    return 0;
}