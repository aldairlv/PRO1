#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cin >> filas >> columnas;
    int result = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
	    char numero;
	    cin >> numero;
            if ((i + j) % 2 == 0) result = result + (numero -'0'); 	
	}
    }
    cout << result << endl;
}
