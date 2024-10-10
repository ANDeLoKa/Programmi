#include <iostream>
#include <cstdlib>
using namespace std;

#define FACCE 6;

int tiradadi(){

    return (rand() % 6 ) + 1;
}

void valuta_vincitore(int* arr){

    if(arr[0] > arr[1]){
        cout<<"L'attaccante ha vinto."<<endl;
    }
    else if(arr[0] < arr[1]){
        cout<<"Il difensore ha vinto."<<endl;
    }
    else{
        cout<<"Pareggio."<<endl;
    }
}

int main(){

    srand(time(NULL));
    int ris_dadi[2] = {0,0}; // dadi[0] attaccante, dadi[1] difensore

    ris_dadi[0] = tiradadi();
    ris_dadi[1] = tiradadi();
    
    cout<<"Attaccante: "<<ris_dadi[0]<<", Difensore: "<<ris_dadi[1]<<"."<<endl;

    valuta_vincitore(ris_dadi);

    return 0;
}