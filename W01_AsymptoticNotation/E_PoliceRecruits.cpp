
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int events, event, crimesNotSolved = 0, polices = 0;
    cin >> events;
    for(int i = 0; i < events; i++){
        cin >> event;
        polices += event;
        if(polices < 0){
            crimesNotSolved++;
            polices = 0;
        }
    }
    cout << crimesNotSolved;
    return 0;
}