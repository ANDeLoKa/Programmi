/*
Scrivere un programma che risolva un'equazione di 2 grado, dando
   anche le soluzioni complesse

     ax^2 + b*x + c = 0

     se b^2 - 4ac >= 0
     x1 = (-b + sqrt(b^2 - 4ac)) / 2a
     x2 = (-b - sqrt(b^2 - 4ac)) / 2a

     se b^2 - 4ac < 0

     x1 = -b/2a "+"  sqrt(-(b^2 - 4ac))) / 2a "i"
     x2 = -b/2a "-"  sqrt(-(b^2 - 4ac))) / 2a "i"

     e.g.   3.0 + 4.0i e 3.0 - 4.0i 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double a, b, c;
    a = b = c = 0;

    cout<<"ax^2 + bx + c = 0"<<endl;
    cout<<"Inserisci i valori di a, b, c: "<<endl;
    cin>>a>>b>>c;

    double delta = pow(b, 2) - (4*a*c);
    double x1, x2;

    if (delta == 0){
        x1 = ( -b + sqrt(delta) ) / (2*a);
        cout<<"L'equazione ha un'unica soluzione ed e': "<<x1<<endl;
    }
    else if(delta >= 0){
        x1 = ( -b + sqrt(delta) ) / (2*a);
        x2 = ( -b - sqrt(delta) ) / (2*a);
        cout<<"L'equazione ha due soluzioni e sono: "<<endl<<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;

    }
    else{
        double x1_C, x2_C;
        x1 = (-b)/2*a;
        x2 = sqrt(-delta) / (2*a);
        cout<<"L'equazione ha due soluzione e sono: "<<endl;
        cout<<x1<<" + "<<x2<<"i"<<endl;
        cout<<x1<<" - "<<x2<<"i"<<endl;
    }

     return 0;
}