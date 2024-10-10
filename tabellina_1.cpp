#include <iostream>
using namespace std;
int main() {

    int in = -1;
    while(true) {
        cout<<"Insersci un numero: ";
        cin>>in;

        if(in == 0) {
            return 0;
        }

        for (int i = 0; i <= 10; i++) {
            cout<<in*i<<" ";
        }
        cout<<endl;
    }

}