#include <iostream>
using namespace std;

int main() {

    char op; int num1, num2;

    cout<<"Inserisci il primo numero: ";
    cin>>num1;

    do {
        cout<<"Insersci l'operatore: ";
        cin>>op;
    }while(op != '+' && op != '-' && op != '*' && op != '/');

    cout<<"Inserisci il primo numero: ";
    cin>>num2;

    switch (op)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    case '/':
        if(num2!=0){
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        }
        else{
            cerr<<"Errore."<<endl;
            exit(-1);
        }
        break;
    default:
        cerr<<"Errore."<<endl;
        exit(-1);
    }

    return 0;
}