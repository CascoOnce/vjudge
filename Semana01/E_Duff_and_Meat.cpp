
#include <iostream>
using namespace std;

int main (void){
    int days, amount, price, precioMenor = 99999999, precioFi = 0;
    cin >> days;
    for (int i = 0; i < days; i++){
        cin >> amount >> price;
        if (price < precioMenor){
            precioMenor = price;
        }
        precioFi += precioMenor*amount;
    }
    cout << precioFi;
    return 0;
}