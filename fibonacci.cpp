#include <iostream>
using namespace std;

int main() {

    int n = 0;
    do {
        cout<<"Inserisci un numero: ";
        cin>>n;
    }while(n <= 1);

    int fib = 0;    
    if(n == 0){
        fib = 0;
    }
    else if(n == 1){
        fib = 1;
    }
    else{
        int n1 = 1, n2 = 1;
        cout<<n1<<" "<<n2<<" ";
        for(int i = 0; i < n-2; i++){
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
            cout<<fib<<" ";
        }
    }

    return 0;
}