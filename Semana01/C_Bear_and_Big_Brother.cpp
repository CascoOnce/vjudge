
#include <iostream>
using namespace std;

int main (void){
    int limak, bob, year;
    cin >> limak >> bob;
    // year -> limak*3 and bob*2
    for (year = 0; limak <= bob; year++){
        limak*=3;
        bob*=2;
    }
    cout << year;
    return 0;
}