
// Casco_Once

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main (void){
    float numbers, number;
    vector<float> lista;
    cin >> numbers;
    cout << setprecision(1) << fixed;
    for(int i = 0; i < numbers; i++){
        cin >> number;
        lista.insert(upper_bound(lista.begin(), lista.end(), number), number);
        int size = lista.size(), pos = size/2;
        float a, b, value;
        if(size%2 == 0) value = (lista[pos-1] + lista[pos])/2;
        else value = lista[pos];
        cout << value << endl;
    }
    return 0;
}