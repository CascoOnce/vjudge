
// Casco_Once

#include <iostream>
#include <vector>
using namespace std;

int main (void){
    int fingers, number;
    vector<int> times(10, 0);
    char c;
    cin >> fingers;
    fingers *= 2;
    for (int i = 0; i < 16; i++){
        cin >> c;
        int time = c - '0';
        if (c!='.') times[time]++;
    }
    for (int i = 0; i < 10; i++){
        if (times[i] > fingers){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}