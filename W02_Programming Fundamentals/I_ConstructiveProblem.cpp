
// Casco_Once

#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool comprobar(int inicio, int fin, vector<int> posiciones){
    for(int aux:posiciones) if(aux < inicio || aux > fin) return true;
    return false;
}

int main (void){
    int cases, count, element, inicio, fin;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int MEX = -1;
        map<int, vector<int>> posiciones;
        cin >> count;
        // long long array[count];
        for(int j = 0; j < count; j++){
            cin >> element;
            posiciones[element].push_back(j);
        }
        for(int i = 0; i < count; i++){
            if(posiciones.find(i) == posiciones.end()){
                MEX = i;
                break;
            }
        }
        if(MEX == -1) cout << "NO" << endl;
        else if(posiciones.find(MEX+1) == posiciones.end()) cout << "YES" << endl;
        else{
            inicio = posiciones[MEX+1].front();
            fin = posiciones[MEX+1].back();
            bool incrementa = true;
            for(int i = 0; i < MEX; i++){
                if(!comprobar(inicio, fin, posiciones[i])){
                    incrementa = false;
                    break;
                }
            }
            if(incrementa) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}