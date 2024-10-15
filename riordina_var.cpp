#include <iostream>

void stampa_ordinato(int n1, int n2, int n3) {
    
    int min, mid, max;
    
    if(n1 > n2){
        if(n1 > n3){
            max = n1; mid = n3; min = n2;
        }
        else { 
            max = n3; mid = n1; min = n2;
        }
    }
    else{
        if(n2 > n3){
            max = n2; mid = n3; min = n1;
        }
        else { 
            max = n3; mid = n2; min = n1;
        }
    }

    std::cout<<min<<" "<<mid<<" "<<max<<std::endl;
}

int main() {

    int n1 = 0, n2 = 0, n3 = 0;
    std::cout<<"Inserisci tre numeri: "<<std::endl;
    std::cin>>n1>>n2>>n3;

    stampa_ordinato(n1, n2, n3);

    return 0;
}