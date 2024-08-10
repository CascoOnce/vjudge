
// Casco_Once

#include <iostream>
#include <queue>
#include <map>
using namespace std;

bool buscar(queue<pair<int, int>> &cola, int valor){
    while(cola.front().first != valor){
        pair<int, int> number = cola.front();
        cola.pop();
        cola.push(number);
    }
    pair<int, int> aux = cola.front();
    cola.pop();
    if(aux.second == 1) return true;
    else return false;
}

void printerQueue(){
    int jobs, me, prioridad, tiempo = 0;
    cin >> jobs >> me;
    queue<pair<int, int>> cola;
    vector<int> cantPrioritarios(10,0);
    for(int i = 0; i < jobs; i++){
        cin >> prioridad;
        if(i == me) cola.push({prioridad, 1});
        else cola.push({prioridad, 0});
        cantPrioritarios[prioridad]++;
    }
    for(int i = 9; i > 0; i--){
        while(cantPrioritarios[i]--){
            tiempo++;
            if(buscar(cola, i)){
                cout << tiempo << endl;
                return;
            }
        }
    }
}

int main (void){
    int cases;
    cin >> cases;
    while(cases--) printerQueue();
    return 0;
}