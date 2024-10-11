#include <iostream>
#include <cstdlib>
using namespace std;

void genera_array(int*, int);
void stampa_array(int*, int);
void inserisci(int*, int, int*, int, int);

int main() {
    srand(time(NULL));

    int dim = 0, new_num, pos;
    do {
        cout<<"Inserisci la dimensione dell'array: ";
        cin>>dim;
    } while(dim<1);

    int v_in[dim], v_out[dim+1];
    genera_array(v_in, dim);
    cout<<"Array inizializzato:"<<endl;
    stampa_array(v_in, dim);

    cout<<"Inserisci il valore da aggiungere: ";
    cin>>new_num;
    do {
        cout<<"Inserisci la posizione dove aggiungerlo: ";
        cin>>pos;
    } while(pos < 0 || pos > dim-1);


    inserisci(v_in, dim, v_out, new_num, pos);

    cout<<"Array finale: "<<endl;
    stampa_array(v_out, dim+1);    

    return 0;
}

void stampa_array(int arr[], int dim) {
    for(int i = 0; i < dim; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void genera_array(int arr[], int dim) {
    for(int i = 0; i < dim; i++) {
        //intervallo [1, 100]
        arr[i] = (rand() % 100) + 1;
    }
}

void inserisci(int arr_in[], int dim, int arr_out[], int num, int pos) {
    for(int i = 0; i < dim+1; i++) {
        if(i < pos) {
            arr_out[i] = arr_in[i];
        }
        else if(i == pos) {
            arr_out[i] = num;
        }
        else /* i > pos */ {
            arr_out[i] = arr_in[i - 1];
        }
    }
}