
#include <iostream>
using namespace std;

int main (void){
    //  09/22/1867 -> Sunday -> 0
    //  09/22/2017 -> Friday -> 5
    int n, birthday = 0, year = 1867;
    cin >> n;
    for (int i = 0; i < n ; i++){
        birthday++;
        year++;
        if (year % 400 == 0) birthday++;
        else if (year % 100 == 0);
        else if (year % 4 == 0) birthday++;
    }
    switch (birthday % 7)
    {
    case 0: cout << "Sunday";
        break;
    case 1: cout << "Monday";
        break;
    case 2: cout << "Tuesday";
        break;
    case 3: cout << "Wednesday";
        break;
    case 4: cout << "Thursday";
        break;
    case 5: cout << "Friday";
        break;
    case 6: cout << "Saturday";
        break;
    }
    return 0;
}