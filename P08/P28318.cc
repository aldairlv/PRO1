#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

void leer_matriz(Matriz& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
	for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
}

void mostrar_matriz(const Matriz& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
	for (int j = 0; j < c; ++j) cout << " " << m[i][j];
	cout << endl;
    }
}

int main() {
    int filas, columnas;
    cin >> filas >> columnas;
    Matriz mat(filas, Fila(columnas));
    leer_matriz(mat);
    string request;
    while (cin >> request) {
	if (request == "row") {
	    int r;
	    cin >> r;
	    cout << request << ' ' << r << ':';
	    for (int i = 0; i < columnas; ++i) cout << ' ' << mat[r - 1][i]; 	
	}
        else if (request == "column") {
            int c;
	    cin >> c;
	    cout << request << ' ' << c << ':';
	    for (int i = 0; i < filas; ++i) cout << ' ' << mat[i][c - 1]; 	
	}
        else {
    	    int r, c;
	    cin >> r >> c;
	    cout << request << ' ' << r << ' ' << c << ": " << mat[r - 1][c - 1]; 	
	}
        cout << endl;
    }
}
