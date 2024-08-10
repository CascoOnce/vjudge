
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    long long cantZeros = 0, exe = 1, number;
    cin >> number;
    while(number != 0){
        if(number % 2 == 0) cantZeros++;
        number/=2;
    }
    cout << (exe << cantZeros); 
    return 0;
}