#include <iostream>
using namespace std;

int main() {
    
    int n = -1;
    do {
 
        cout<<"inserisci un numero positivo: ";
        cin>>n;
    }while(n < 0);

    int num = n;
    int cifre = 0;
    while(n > 0) {
        n = n / 10;
        cifre += 1;
    }

    int arr_num[cifre], arr_num_inverso[cifre], j = cifre - 1;
    for(int i = 0; i < cifre; i++){
        arr_num[i] = num % 10;
        arr_num_inverso[j] = num % 10;
        num = num / 10;
        j--;
    }

    /*
    for(int i = 0; i < cifre; i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < cifre; i++){
        cout<<arr_num_inverso[i]<<" ";
    }
    */

   //FARE CONFRONTO TRA VETTORI UNO AD UNO E FINE

    return 0;
}