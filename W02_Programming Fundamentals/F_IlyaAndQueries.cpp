
// Casco_Once

#include <iostream>
#include <string>
using namespace std;

int main (void){
    string chain;
    int queries, l, r, characters;
    cin >> chain >> queries;
    characters = chain.size();
    int sumatory[characters]{};
    for (int i = 1; i < characters; i++){
        if (chain[i-1] == chain[i]) sumatory[i] = sumatory[i-1]+1;
        else sumatory[i] = sumatory[i-1];
    }
    for (int i = 0; i < queries; i++){
        cin >> l >> r;
        cout << sumatory[r-1] - sumatory[l-1] << endl;
    }
    return 0;
}