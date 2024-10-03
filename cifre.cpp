#include <iostream>
using namespace std;

int main() {

    long int n = -1;
    do {
 
        cout<<"inserisci un numero positivo: ";
        cin>>n;
    }while(n < 0);

    int cifre = 0;
    while(n > 0) {
        n = n / 10;
        cifre += 1;
        //cout<<n<<endl;
    }

    cout<<"Il numero ha "<<cifre<<" cifre."<<endl;

    return 0;
}