
// Casco_Once

#include <iostream>
using namespace std;

long long power(int number, int exponent){
    long long pow = 1;
    for (int i = 1; i <= exponent; i++) pow *= number;
    return pow;
}

int main (void){
    long long n, m, number;
    cin >> n >> m;
    long long sum = -(n*m);
    long long rows0[n]{}, rows1[n]{};
    long long columns0[m]{}, columns1[m]{};
    for (long long i = 0; i < n; i++){
        for (long long j = 0; j < m; j++){
            cin >> number;
            if (number == 0) columns0[j]++, rows0[i]++; 
            else columns1[j]++, rows1[i]++; 
        }
    }
    for (long long i = 0; i < n; i++){
        if (rows0[i] > 0) sum += power(2, rows0[i]) - 1;
        if (rows1[i] > 0) sum += power(2, rows1[i]) - 1;
    }
    for (long long i = 0; i < m; i++){
        if (columns0[i] > 0) sum += power(2, columns0[i]) - 1;
        if (columns1[i] > 0) sum += power(2, columns1[i]) - 1;
    }
    cout << sum;
    return 0;
}