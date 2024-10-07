#include <iostream>
using namespace std;

int main(){

    int a = 0, b = 0, min = 0, max = 0;

    do{
        cout<<"Insersci l'intervallo a/b: "<<endl;
        cin>>a>>b;
    }while( a == b || (a < 0 || a > 127) || (b < 0 || b > 127) );

    if(a > b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }

    for(int i = min; i <= max; i++){
        cout<<"Carattere "<<i<<": "<<(char)i<<endl;
    }

    return 0;
}