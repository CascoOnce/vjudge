
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int elements, positives = 0, negatives = 0, zeros = 0, number;
    cin >> elements;
    int positive[elements], negative[elements], zero[elements];
    for (int i = 0; i < elements; i++){
        cin >> number;
        if (number < 0) negative[negatives++] = number;
        else if (number > 0) positive[positives++] = number;
        else zero[zeros++] = number;
    }
    cout << "1 " << negative[0] << endl; 
    if (positives >= 1){
        cout << "1 " << positive[0] << endl;
        cout << zeros + positives + negatives - 2 << ' ';
        for (int i = 1; i < positives; i++) cout << positive[i] << ' ';
        for (int i = 1; i < negatives; i++) cout << negative[i] << ' ';
    }else{
        cout << "2 " << negative[1] << ' ' << negative[2] << ' ' << endl;
        cout << zeros + negatives - 3 << ' ';
        for (int i = 3; i < negatives; i++) cout << negative[i] << ' ';
    }
    for (int i = 0; i < zeros; i++) cout << zero[i] << ' ';
    return 0;
}