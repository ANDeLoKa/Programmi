#include <iostream>
int main() {
    int b=1,z=2;
    while(z>=0){
        z--;b++;
    }
    b -= z;

    std::cout<<b<<" "<<z<<std::endl;
}