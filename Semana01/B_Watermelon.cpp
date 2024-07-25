
#include <iostream>
using namespace std;

int main (void){
    int n;
    cin >> n;
    if (n > 2 and !((n - 2) % 2)){
        cout << "YES";
    }else cout << "NO";
    return 0;
}