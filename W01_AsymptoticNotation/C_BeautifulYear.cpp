
// Casco_Once

#include <iostream>
using namespace std;

bool comprobar(int year){
    int a, b, c, d;
    a = year%10;
    b = (year/10)%10;
    c = (year/100)%10;
    d = year/1000;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) return true;
    return false;
}

int main (void){
    int year;
    cin >> year;
    while(!comprobar(++year));
    cout << year;
    return 0;
}