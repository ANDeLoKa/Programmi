/*
int sum = 0;
for (int i=0; i<10; i++){
    sum += i;
}
cout << sum << endl;
*/

#include <iostream>
int main() {

    int sum = 0, i = 0;
    while(i < 10) {
        sum += i;
        i++;
    }

    std::cout<<sum<<std::endl;

}