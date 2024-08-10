
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int numbers, sumaTotal = 0, inclusive;
    cin >> numbers;
    for(int i = 1; i < numbers; i++){
        cin >> inclusive;
        sumaTotal += (i - inclusive);
    }
    cout << sumaTotal+numbers;
    return 0;
}