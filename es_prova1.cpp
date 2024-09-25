#include <iostream>
#include <cmath>

using namespace std;

double calc_vol(double r){
    return M_PI*pow(r, 3);
}

int main(){

    double r;
    cout<<"Inserisci il raggio: ";
    cin>> r;

    cout<<"Il volume della sfera corrispondente e': "<<calc_vol(r)<<endl;

    return 0;
}