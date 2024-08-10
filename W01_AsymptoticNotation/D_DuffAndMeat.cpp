
// Casco_Once

#include <iostream>
using namespace std;

int main (void){
    int days, amount, precio,  menorPrecio = INT_MAX, pagoFinal = 0;
    cin >> days;
    for(int i = 0; i < days; i++){
        cin >> amount >> precio;
        if(precio < menorPrecio) menorPrecio = precio;
        pagoFinal += (amount*menorPrecio);
    }
    cout << pagoFinal;
    return 0;
}