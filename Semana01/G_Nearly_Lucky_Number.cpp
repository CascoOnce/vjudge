
#include <iostream>
using namespace std;

int numberLuckyDigits(long long data);
bool lucky(long long data);

int main (void){
    long long number;
    cin >> number;
    if (lucky(number)){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}

bool lucky(long long data){
    long long number = data;
    do {
        number = numberLuckyDigits(number);
        if (number == 0) return false;
    } while (number != 7 and number != 4);

    return true;
}

int numberLuckyDigits(long long data){
    long long number = data;
    int lucky = 0, digit;
    while (number) {
        digit = number % 10;
        number /= 10;
        if (digit == 4 or digit == 7) lucky++;
    }
    return lucky;
}