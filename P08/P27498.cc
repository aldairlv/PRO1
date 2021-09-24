#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

void leer_matrix(Matrix& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
	for (int j = 0; j < c; ++j) cin >> m[i][j];
    }
}

void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void transpose(Matrix& m) {
    int r = m.size();
    for (int i = 0; i < r; ++i) {
	for (int j = i; j < r; ++j) {
	    swap(m[i][j],m[j][i]);
	}
    }
}

void mostrar_matrix(const Matrix& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
	for (int j = 0; j < c; ++j) cout << " " << m[i][j];
	cout << endl;
    }
}

int main() {
    int f, c;
    cin >> f >> c;
    Matrix mat(f, vector<int> (c));
    leer_matrix(mat);
    transpose(mat);
    mostrar_matrix(mat);
}
