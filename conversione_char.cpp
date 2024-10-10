#include <iostream>
using namespace std;

void converti(char num);

int main(){

    char car;
    cout<<"Inserisci un carattere: ";
    cin>>car;

    converti(car);
    return 0;
}

void converti(char car){
    if(car >= 97 && car <= 127){
        cout<<(char)(car-32)<<endl;
    }
    else{
        cout<<"Carattere non valido."<<endl;
    }
}