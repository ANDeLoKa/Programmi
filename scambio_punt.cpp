#include <iostream>
using namespace std;

void scambia(double* a, double* b);

int main(){
    
    double a,b;
    cout<<"Insersci due numeri: "<<endl;
    cin>>a>>b;

    cout<<"Valori inseriti:"<<endl<<" - a = "<<a<<endl<<" - b = "<<b<<endl;
    scambia(&a, &b);

    cout<<"Valori modificati:"<<endl<<" - a = "<<a<<endl<<" - b = "<<b<<endl;

    return 0;
}

void scambia(double* a, double* b){

    double temp = *a;
    *a = *b;
    *b = temp;
}