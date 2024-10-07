#include <iostream>
using namespace std;

int main(){

    cout<<"Matrice identita': "<<endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }


    return 0;
}