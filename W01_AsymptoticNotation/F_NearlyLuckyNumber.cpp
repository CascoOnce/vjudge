
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    long long luckyNumber, count = 0;
    cin >> luckyNumber;
    while(luckyNumber != 0){
        if(luckyNumber%10 == 7 || luckyNumber%10 == 4) count++;
        luckyNumber /= 10;
    }
    if(count == 7 || count == 4) cout << "YES";
    else cout << "NO";
    return 0;
}