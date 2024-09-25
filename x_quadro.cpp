/*
Scrivere un programma che risolva un'equazione di 2 grado nei reali

     ax^2 + b*x + c = 0

     se b^2 - 4ac >= 0
     x1 = (-b + sqrt(b^2 - 4ac)) / 2a
     x2 = (-b - sqrt(b^2 - 4ac)) / 2a

     se b^2 - 4ac < 0 non definita
   
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
          cout<<"L'equazione ha due soluzione e sono: "<<endl<<"x1: "<<x1<<endl<<"x2: "<<x2<<endl;

     }
     else{
          cout<<"L'equazione non ha soluzioni reali."<<endl;
          exit(-1);
     }

     return 0;
}