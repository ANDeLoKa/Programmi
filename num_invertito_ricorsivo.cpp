#include <iostream>
using namespace std;

void inverti(int num);

int main(){

    int num_iniz = 0;
    cout<<"Inserisci un numero: ";
    cin>>num_iniz;

    inverti(num_iniz);
    cout<<endl;

    return 0;
}

void inverti(int num){

    if (num < 0){
        num *= -1;
        cout<<"-";
    }

    int tmp = 0;
    if(num > 0){
        tmp = num % 10;
        num /= 10;

        cout<<tmp;

        inverti(num);
    }
}