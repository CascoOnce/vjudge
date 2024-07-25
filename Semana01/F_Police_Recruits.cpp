
#include <iostream>
using namespace std;

int main (void){
    int n, police = 0, operation = 0, crimes = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> operation;
        police += operation;
        if (police < 0){
            crimes++;
            police = 0;
        } 
    }
    cout << crimes;
    return 0;
}