
#include <iostream>
using namespace std;

int main (void){
    int n, elements, l = 0, r;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> elements;
        int al[elements], ar[elements];
        for (int j = 0; j < elements ; j++) cin >> al[j];
        for (int j = 0; j < elements ; j++) cin >> ar[j];
        for (int j = 0; j < elements; j++){
            if (ar[j] != al[j]) l = j, r = j; 
        }
        while (l != 0){
            if (ar[l-1] <= ar[l]) l--;
            else break;
        }
        while (r != elements-1){
            if (ar[r] <= ar[r+1]) r++;
            else break; 
        }
        cout << l+1 << ' ' << r+1 << endl;
    }
    return 0;
}

