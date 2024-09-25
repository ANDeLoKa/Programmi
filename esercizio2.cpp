#include <iostream>

using namespace std;

double conv_F_C(double F){
    return (F - 32)/1.8;
}

int main(){

    cout<<"Inserisci la temperatura in Fahrenheit: ";
    double temp_F;
    cin>> temp_F;

    cout<<temp_F<<" Fahrenheit sono "<<conv_F_C(temp_F)<< " Celsius."<<endl;

    return 0;
}