#include <iostream>
using namespace std;

int main(){

    for(int i = 65; i < 123; i++){
        if( !(i > 90 && i < 97) ) {
            cout<<"Carattere "<<i<<": "<<(char)i<<endl;
        }
    }

    return 0;
}