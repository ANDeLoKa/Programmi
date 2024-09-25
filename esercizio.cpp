#include <iostream>
#include <cmath>

using namespace std;

double calc_circ(double r){
    return 2*M_PI*r;
}

double calc_area(double r){
    return M_PI*pow(r,2);
}

int main(){

    double a;
    cout<<"Inserisci il raggio: ";
    cin>> a;
    
    cout<<"Circonferenza: "<< calc_circ(a) << endl;
    cout<<"Area: "<< calc_area(a) << endl;

    return 0;
}