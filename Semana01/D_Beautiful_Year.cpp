
#include <iostream>
using namespace std;

void descomponer(int year, int &a, int &b, int &c, int &d);

int main (void){
    int a,b,c,d, year;
    cin >> year;
    year++;
    descomponer(year, a, b, c, d);
    while(!((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))){
        a++;
        if (a == 10){
            a = 0;
            b++;
            if (b == 10){
                b = 0;
                c++;
                if (c == 10){
                    c = 0;
                    d++;
                }
            }
        }
    }
    year = d*1000 + c*100 + b*10 + a;
    cout << year;
    return 0;
}

void descomponer(int year, int &a, int &b, int &c, int &d){
    //1 9 8 7
    a = year % 10;
    b = (year/10) % 10;
    c = (year/100) % 10;
    d = year/1000;
}