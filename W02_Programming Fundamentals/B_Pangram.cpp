
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int characters;
    cin >> characters;
    string pangram;
    cin >> pangram;
    int caracteres[26]{};
    if (characters < 26) cout << "NO";
    else{
        for(int i = 0; i < characters; i++){
            if(pangram[i] <= 90 && pangram[i] >= 65) caracteres[pangram[i]-65]++;
            else if(pangram[i] <= 122 && pangram[i] >= 97) caracteres[pangram[i]-97]++;
        }
        for(int i = 0; i < 26; i++){
            if(caracteres[i] == 0){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}