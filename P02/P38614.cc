// Numeros TXATXI.
// Calcular si un numero n es txatxi o no.
// Es  txatxi si la suma de sus digitos en posiciones senares es par.
// Input: Un numero natural.
// Output: Escribir si n es txatxi o no.

#include <iostream>
using namespace std;

int main() {
    //leer un numero natural.
    int numero;
    cin >> numero;
    cout << numero;

    //En este bloque calcularemos el resultado de la suma de digitos.
    int resultado;
    if (numero <= 9) resultado = numero;
    else {
	resultado = 0;
	bool primero = true;
	while (numero > 0) {
	    if (primero) {
	        resultado = resultado + numero % 10;
		primero = false;
	    }
	    else primero = true;
	    numero = numero / 10;
	}
    }

    //En este bloque evaluaremos si el resultado es txatxi o no.
    if (resultado % 2 == 0) cout << " ES TXATXI";
    else cout << " NO ES TXATXI";
    cout << endl;
}
