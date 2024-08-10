
// Casco_Once

#include <iostream>
#include <climits>
#include <map>
using namespace std;

int main (void){
    long long number, numbers, min = LONG_LONG_MAX, minimaPerdida;
    map<long long, long long> hash;
    cin >> numbers;
    for(int i = 0; i < numbers; i++){
        cin >> number;
        hash[number] = i;
    }
    for(auto aux = hash.begin(); aux != hash.cend(); aux++){
        pair<long long, long long> value = *aux, siguiente;
        long long cambio;
        for(auto cambio = aux; cambio != hash.cend(); cambio++){
            pair<long long, long long> mayor = *cambio;
            if(value.second > mayor.second){
                minimaPerdida = (mayor.first - value.first);
                if(minimaPerdida < min) min = minimaPerdida;
                break;
            }
        }
    }
    cout << min << endl;
    return 0;
}