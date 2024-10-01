#include <iostream>

int main() {

    char in; int offset;
    
    try{
        std::cout<<"Inserisci una lettera: ";
        std::cin>>in;

        std::cout<<"Inserisci il parametro del cifrario: ";
        std::cin>>offset;

        if(offset < 1 || offset > 26){
            throw(offset);
        }
        
    }
    catch(int n){
        std::cerr<<"Errore, parametro non valido."<<std::endl;
        exit(-1);
    }

    char cifrato = (char)( (int)in + offset );

    std::cout<<"Il carattere cifrato e': "<<cifrato<<std::endl;

    return 0;
}