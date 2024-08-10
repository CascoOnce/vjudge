
// Casco_Once

#include <iostream>
#include <set>
using namespace std;

int main (void){
    int queries;
    long long number;
    multiset<long long> values;
    cin >> queries;
    for(int i = 0; i < queries; i++){
        cin >> number;
        if(number == 1){
            cin >> number;
            values.insert(number);
        }else if(number == 2){
            cin >> number;
            values.erase(number);
        }else if(number == 3){
            long long min = *values.begin();
            cout << min << endl;
        }
    }
    return 0;
}