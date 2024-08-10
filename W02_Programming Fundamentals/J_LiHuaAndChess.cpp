
// Casco_Once

#include <iostream>
using namespace std;

void solve(){
    int rows, columns, k, p, q;
    cin >> rows >> columns;
    // 1ra Pregunta
    cout << '?' << ' ' << 1 << ' ' << 1 << endl;
    cout.flush();
    cin >> k;
    if(k == 0){
        cout << '!' << ' ' << 1 << ' ' << 1 << endl;
        cout.flush();
        return;
    }
    int caso2 = min(k+1, columns);
    cout << '?' << ' ' << 1 << ' ' << caso2 << endl;
    cout.flush();
    cin >> p;
    if(p == 0){
        cout << '!' << ' ' << 1 << ' ' << caso2 << endl;
        cout.flush();
        return;
    }
    if(p < k){
        cout << '!' << ' ' << p + 1 << ' ' << caso2 << endl;
        cout.flush();
        return;
    }
    int caso3 = min(k+1, rows);
    cout << '?' << ' ' << caso3 << ' ' << 1 << endl;
    cout.flush();
    cin >> q;
    if(q == 0){
        cout << '!' << ' ' << caso3 << ' ' << 1 << endl;
        cout.flush();
    }else if(p == q && k == p){
        cout << '!' << ' ' << k + 1 << ' ' << k + 1 << endl;
        cout.flush();
    }else{
        cout << '!' << ' ' << k + 1 << ' ' << q + 1 << endl;
        cout.flush();
    }
}

int main (void){
    int cases;
    cin >> cases;
    while(cases--) solve();
    return 0;
}