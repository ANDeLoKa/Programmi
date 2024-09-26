#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c;
    a = b = c = 0;

    do{
        cout<<"Inserisci la lunghezza dei lati a, b, c."<<endl;
        cin>>a>>b>>c;
    }while(a < 0 && b < 0 && c < 0);

    double p = (a + b + c) / 2;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));

    // se il triangolo è degenere allora la sua area sarà uguale a 0;
    if(area == 0) {
        cout<<"Il triangolo è degenere."<<endl;
    }
    else if(area < 0) {
        cout<<"errore."<<endl;
    }
    else{
        cout<<"L'area del triangolo e': "<<area<<endl;
    }

    return 0;
}