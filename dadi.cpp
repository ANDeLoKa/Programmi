#include <iostream>
#include <cstdlib>
using namespace std;

#define NUMLANCI 10
#define NUMFACCE 6
#define NUMINDOVINA 1

void lancia_dadi(int* arr);
void check(int in, int* arr);

int main(){

    int valori_dado[NUMLANCI];

    lancia_dadi(valori_dado);

    /*
    for(int i = 0; i < NUMLANCI; i++){
        cout<<valori_dado[i];
    }
    cout<<endl;
    */

    int indovina;
    cout<<"Indovina quante volte e' capitato il numero "<<NUMINDOVINA<<": ";
    cin>>indovina;

    check(indovina, valori_dado);

    return 0;
}

void lancia_dadi(int* arr){
    srand(time(NULL));

    for(int i = 0; i < NUMLANCI; i++){
        arr[i] = (rand() % NUMFACCE) + 1;
    }
}

void check(int in, int* arr){
    int counter = 0;
    for(int i = 0; i < NUMLANCI; i++){
        if(arr[i] == NUMINDOVINA){
            counter += 1;
        }
    }

    if(counter == in){
        cout<<"Hai indovinato!"<<endl;
    }
    else{
        cout<<"Non hai indovinato."<<endl;
    }
}