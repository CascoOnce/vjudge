
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int year, pos = 6, actually = 1867;
    string dias[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin >> year;
    for(int i = 0; i < year; i++){
        actually++, pos++;
        if(actually%4 == 0 && (actually%100 != 0 || actually%400 == 0)) pos++;
    }
    cout << dias[pos%7];
    return 0;
}