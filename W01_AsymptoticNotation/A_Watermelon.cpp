
// Casco_Once

#include <iostream>
using namespace std; 

int main (void){
    int n = 0;
    cin >> n;
    if ((n-2)%2 == 0 && n>2) cout << "YES";
    else cout << "NO" << endl;
    return 0;
}