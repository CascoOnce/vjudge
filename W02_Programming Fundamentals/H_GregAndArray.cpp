
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int n, m, k;
    cin >> n >> m >> k;
    long long array[n], lOperations[m], rOperations[m], dOperations[m], changes[m+1]{}, xQuerie, yQuerie;
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < m; i++) cin >> lOperations[i] >> rOperations[i] >> dOperations[i];
    for (int i = 0; i < k; i++){
        cin >> xQuerie >> yQuerie;
        changes[xQuerie-1]++;
        changes[yQuerie]--;
    }
    long long countOperations[m]{}, arrayChanges[n]{};
    for (int i = 0; i < m; i++){
        countOperations[i] += changes[i];
        countOperations[i+1] = countOperations[i];
        arrayChanges[lOperations[i]-1] += countOperations[i]*dOperations[i];
        arrayChanges[rOperations[i]] -= countOperations[i]*dOperations[i];
        
    }
    long long sum[n]{};
    for (int i = 0; i < n; i++){
        sum[i] += arrayChanges[i];
        sum[i+1] = sum[i];
        array[i] += sum[i];
        cout << array[i] << ' ';
    }
    return 0;
}