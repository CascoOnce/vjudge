
// Casco_Once

#include <iostream>
#include <stack>
using namespace std;

bool sonIguales(char c1, char c2){
    if((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']')) return true;
    else return false;
}

bool reconocer(string s){
    stack<char> pila;
    int size = s.size();
    for(int i = 0; i < size; i++){
        char c = s[i], alternativo;
        if(c == '(' || c == '{' || c == '[') pila.push(c);
        else if(c == ')' || c == '}' || c == ']'){
            if(pila.empty()) return false;
            alternativo = pila.top();
            if(sonIguales(alternativo, c)) pila.pop();
            else return false;
        }
    }
    if(pila.empty()) return true;
    else return false;
}

int main (void){
    int cases;
    string s;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> s;
        if(reconocer(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}