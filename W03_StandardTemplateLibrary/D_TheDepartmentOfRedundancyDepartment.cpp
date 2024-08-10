
// Casco_Once

#include <iostream>
#include <vector>
using namespace std;

int main (void){
    vector<pair<int, int>> hash(0, pair<int, int>{0,0});
    int index, number;
    while(cin>>number){
        bool encontrado = false;
        for(pair<int, int> &aux: hash){
            if(aux.first == number){
                encontrado = true;
                aux.second++;
                break;
            }
        }
        if(!encontrado) hash.push_back({number, 1});
    }
    for(pair<int, int> aux : hash) cout << aux.first << ' ' << aux.second << endl;
    return 0;
}