
#include <iostream>
using namespace std;


int main (void){
    long long n;
    cin >> n;
    cout << n << ' ';
    while (n != 1){
        // impar
        if (n%2) n = n*3+1;
        else n/=2;
        cout << n << ' ';
    }
    return 0;
}