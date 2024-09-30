#include <iostream>
using namespace std;

int main() {

    int c1_x, c1_y, c2_x, c2_y;
    cout<<"Inserisci le coordinate del primo punto."<<endl;
    cin>>c1_x>>c1_y;

    cout<<"Inserisci le coordinate del secondo punto."<<endl;
    cin>>c2_x>>c2_y;

    int X, Y;
    cout<<"Inserisci le coordinate del punto da controllare."<<endl;
    cin>>X>>Y;


    if (c1_x >= c2_x) {
        if(X <= c1_x && X >= c2_x){

            if (c1_y >= c2_y) {
                if(Y <= c1_y && Y >= c2_y){
                    cout<<"Il punto e' all'interno."<<endl;
                }
                else{
                    cout<<"Il punto non e' all'interno."<<endl;
                }
            }
            else{
                if(Y <= c2_y && Y >= c1_y){
                    cout<<"Il punto e' all'interno."<<endl;
                }
                else{
                    cout<<"Il punto non e' all'interno."<<endl;
                }
            }

        }
        else{
            cout<<"Il punto non e' all'interno."<<endl;
        }
    }
    else{
        if(X <= c2_x && X >= c1_x){

            if (c1_y >= c2_y) {
                if(Y <= c1_y && Y >= c2_y){
                    cout<<"Il punto e' all'interno."<<endl;
                }
                else{
                    cout<<"Il punto non e' all'interno."<<endl;
                }
            }
            else{
                if(Y <= c2_y && Y >= c1_y){
                    cout<<"Il punto e' all'interno."<<endl;
                }
                else{
                    cout<<"Il punto non e' all'interno."<<endl;
                }
            }

        }
        else{
            cout<<"Il punto non e' all'interno."<<endl;
        }
    }

    return 0;
}