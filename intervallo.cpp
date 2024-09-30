#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout<<"Inserisci tre numeri interi."<<endl;
    cin>>a>>b>>c;

    if (b <= a) {
        if (a <= c) {
            cout<<-1;
        }
    }
    else if(a < b) {
        cout<<1;
    } 
    else{ // a > c
        cout<<0;
    }

    return 0;
}