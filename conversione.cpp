#include <iostream>
#include <cmath>
using namespace std;

int converti(int *arr, int len){

    int sum = 0;
    int j = len - 1;
    for (int i = 0; i < len; i++) {
        sum = sum + (arr[i] * pow(2, j));
        j--;
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    return sum;
}

int main() {

    int n = -1;
    do {
        cout<<"Insersci il numero di bit: ";
        cin>>n;
    }while(n < 0);
    int bin[n];

    int temp = 0;
    for(int i = 0; i < n; i++){
        cout<<"Insersci il bit: ";
        do {
            if(temp != 0 && temp != 1){
                cout<<"Valore non valido, Riprova: ";
            }
            cin>>temp;
        }while(temp != 0 && temp != 1);
        bin[i] = temp;
    }

    cout<<"Numero binario inserito:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<bin[i];
    }
    cout<<endl;

    int dec = converti(bin, n);

    cout<<"La conversione in decimale e': "<<dec<<endl;

    return 0;
}