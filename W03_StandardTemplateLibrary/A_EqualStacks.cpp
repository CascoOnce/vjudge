
// Casco_Once

#include <iostream>
#include <queue>
using namespace std;

int main (void){
    int element, p1, p2, p3, suma1, suma2, suma3;
    cin >> p1 >> p2 >> p3;
    queue<int> pila1, pila2, pila3;
    suma1 = 0;
    for(int i = 0; i < p1; i++){
        cin >> element;
        suma1 += element;
        pila1.push(element);
    }
    suma2 = 0;
    for(int i = 0; i < p2; i++){
        cin >> element;
        suma2 += element;
        pila2.push(element);
    }
    suma3 = 0;
    for(int i = 0; i < p3; i++){
        cin >> element;
        suma3 += element;
        pila3.push(element);
    }
    while(!(suma1 == suma2 && suma3 == suma2 && suma3 == suma1)){
        if(suma1 > suma2 || suma1 > suma3){
            suma1 -= pila1.front();
            pila1.pop();
        }else if(suma2 > suma1 || suma2 > suma3){
            suma2 -= pila2.front();
            pila2.pop();
        }else if(suma3 > suma1 || suma3 > suma2){
            suma3 -= pila3.front();
            pila3.pop();
        }
    }
    cout << suma1;
    return 0;
}