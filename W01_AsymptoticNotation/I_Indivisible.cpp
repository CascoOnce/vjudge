
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int cases, elements;
    cin >> cases;
    for (int a = 0; a < cases; a++){
        cin >> elements;
        if (elements == 1) cout << "1" << endl;
        else if (elements % 2) cout << "-1" << endl;
        else{
            for (int i = 1; i <= elements; i++){
                if (i % 2) cout << i + 1;
                else cout << i - 1;
                cout << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}