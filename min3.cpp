#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout<<"Inserisci tre numeri interi."<<endl;
    cin>>a>>b>>c;

    if (a > b) {
        if (a > c) {
            cout<<a<<" e' il numero maggiore."<<endl;
        }
        else{
            cout<<c<<" e' il numero maggiore."<<endl;
        }
    }
    else{
        if (b > c) {
            cout<<b<<" e' il numero maggiore."<<endl;
        }
        else{
            cout<<c<<" e' il numero maggiore."<<endl;
        }
    }

    return 0;
}