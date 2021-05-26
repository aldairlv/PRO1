#include <iostream>
using namespace std;

int main() {
    int numero;
    while (cin >> numero) {
        cout << "The sum of the digits of " << numero << " is ";
        int result = 0;
        while (numero > 0) {
            result = result + numero % 10;
	    numero =  numero / 10;
	}
	cout << result << '.' << endl;
    }
}
