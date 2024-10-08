/*
x   x   x   x   x

x               x

x               x

x               x

x   x   x   x   x
*/

#include <iostream>

void figurine1(){

    int row = 5, col = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            
            if( (i == 0 || i == 4) || (j == 0 || j == 4) ){
                std::cout<<"x ";
            }
            else{
                std::cout<<"  ";
            }

        }  
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void figurine2(){

    int row = 5, col = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            if( !( (i == 1 || i == 3) || (j == 1 || j == 3) ) || ( (i == j) || (i+j == (row-1)) ) || (j == 2) || (i == 2) ){
                std::cout<<"x ";
            }
            else{
                std::cout<<"  ";
            }
    
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void figurine3(){

    int row = 5, col = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
    
            if( (i==j) || (i+j == row-1) ){
                std::cout<<"o ";
            }
            else if(i < j){
                std::cout<<"H ";
            }
            else if(i > j){
                std::cout<<"- ";
            }
            else{
                std::cout<<"  ";
            }
    
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

int main(){

    std::cout<<std::endl;
    figurine1();
    figurine2();
    figurine3();

    return 0;
}