#include <iostream>
using namespace std;

int main() {
    int base;
    cin >> base;
    int numero;
    while (cin >> numero) {
	cout << numero << ": ";
	int result = 0;
	while (numero > 0) {
	    result = result + numero % base;
	    numero = numero / base;
	}
	cout << result << endl;
    }
}
