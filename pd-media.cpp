/*
Scrivere un programma che, presi in ingresso due numeri A e B diversi
entrambi pari o entrambi dispari, verifichi che il valore assoluto
della differenza tra la somma di tutti i numeri pari e la somma di
tutti i numeri dispari compresi tra A e B esclusi,
sia uguale al valore medio tra A e B.

Esempio, dati A=3 e B=9, facciamo la somma dei valori dispari compresi
tra A e B: 5+7=12 e la somma dei valori pari compresi tra A e B:
4+6+8=18, la differenza è 6 che è la media dei due valori.
*/

#include <iostream>

void trovasomme(int* list, int min, int max){
    // list[0] pari, list[1] dispari

    int sum_p = 0, sum_d = 0;
    for (int i = min+1; i < max; i++){
        if(i % 2 == 0){
            sum_p += i;
        }
        else{
            sum_d += i;
        }
    }
    list[0] = sum_p;
    list[1] = sum_d;

}

int trovamedia(int min, int max){
    return (min + max) / 2;
}

void check_differenza_media(int* list, int media){
    
    int diff = list[0] - list[1];
    if (diff < 0 ){
        diff *= -1;
    }

    if(diff == media){
        std::cout<<"La differenza tra la somma dei numeri pari e la somma dei numeri dispari e' uguale alla media tra i numeri inseriti"<<std::endl;
    }
    else{
        std::cout<<"La differenza tra la somma dei numeri pari e la somma dei numeri dispari non e' uguale alla media tra i numeri inseriti"<<std::endl;
    }

}

int main() {

    int min, max;
    do{
        std::cout<<"Inserisci 2 numeri: "<<std::endl;
        std::cin>>min>>max;
    }while(min == max);

    //scambio per comodita' con i cicli piu' avanti
    if(min > max){
        max = min + max;
        min = max - min;
        max = max - min;
    }

    int somme[2]; // somme[0] pari, somme[1] dispari
    trovasomme(somme, min, max);
    
    //stampa di servizio
    //std::cout<<somme[0]<<" "<<somme[1]<<std::endl;

    check_differenza_media(somme, trovamedia(min, max));

    return 0;
}