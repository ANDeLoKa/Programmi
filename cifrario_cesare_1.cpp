#include <iostream>

int main() {

    char in; int offset;
    
    do{
        std::cout<<"Inserisci una lettera: ";
        std::cin>>in;
    }while( (in < 'A' || in > 'Z') && (in < 'a' || in > 'z') );

    do{
        std::cout<<"Inserisci il parametro del cifrario: ";
        std::cin>>offset;
    }while(offset < 1 || offset > 26);

    if(in >= 'A' && in <= 'Z'){
        if(in - offset < 65){
            in = 'Z';
            offset -= 1;
        }
    }
    else if(in >= 'a' && in <= 'z'){
        if(in - offset < 97){
            in = 'z';
            offset -= 1;
        }
    }
    else{
        std::cerr<<"Errore."<<std::endl;
        exit(-1);
    }

    char decifrato = (in - offset);

    std::cout<<"Il carattere decifrato e': "<<decifrato<<std::endl;

    return 0;

}