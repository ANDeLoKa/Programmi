#include <iostream>
#include <chrono>
//using namespace std;

int fact_ricorsivo(int);
int fact(int);

int main() {

    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<double> time_span;

    int in;
    do {
        std::cout<<"Inserisci un numero intero positivo: ";
        std::cin>>in;
    } while(in < 0);

    start = std::chrono::steady_clock::now();
    std::cout<<"Il fattoriale di "<<in<<" e': "<<fact(in)<<std::endl;
    end = std::chrono::steady_clock::now();
    time_span = std::chrono::duration_cast<std::chrono::duration<double>>(end - start);
    std::cout << "Tempo trascorso: " << time_span.count()*1000 << " secondi" << std::endl;

    start = std::chrono::steady_clock::now();
    std::cout<<"Il fattoriale ricorsivamente di "<<in<<" e': "<<fact_ricorsivo(in)<<std::endl; 
    end = std::chrono::steady_clock::now();
    time_span = std::chrono::duration_cast<std::chrono::duration<double>>(end - start);
    std::cout << "Tempo trascorso: " << time_span.count()*1000 << " secondi" << std::endl;
   
    return 0;
}

int fact(int num) {
    int ris = num;
    while(num > 1) {
        num--;
        ris *= num;
    }
    return ris;
}

int fact_ricorsivo(int num) {
    
    int ris = num;
    if(num > 0){
        ris *= fact_ricorsivo(num-1);
        return ris;
    }
    else{
        return 1;
    }
}