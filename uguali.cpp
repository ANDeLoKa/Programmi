#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout<<"Inserisci i valor di a, b: "<<endl;
    cin>>a>>b;

    bool uguali = (a <= b) && (a >= b);
    cout<<"I numeri sono uguali? "<<uguali<<endl;

    return 0;
}