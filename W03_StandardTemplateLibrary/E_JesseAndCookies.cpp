
// Casco_Once

#include <iostream>
#include <set>
using namespace std;

int main (void){
    multiset<long long> array;
    long long numbers, cases = 0, minimo, number;
    cin >> numbers >> minimo;
    for(long long i = 0; i < numbers; i++){
        cin >> number;
        array.insert(number);
    }
    bool centinela = false;
    if(numbers == 0) cases == - 1;
    while(array.size() > 0){
        if(*array.begin() >= minimo) break;
        long long a, b, state;
        a = *array.begin();
        array.erase(array.begin());
        if(array.size() == 0){
            cases = -1;
            break;
        }
        b = *array.begin();
        array.erase(array.begin());
        state = a + (b*2);
        array.insert(state);
        cases++;
    }
    cout << cases;
    return 0;
}