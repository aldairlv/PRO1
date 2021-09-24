#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

void leer_matrix(Matrix& m) {
    int d = m.size();
    int w = m[0].size();
    for (int i = 0; i < d; ++i) {
	for(int j = 0; j < w; ++j) cin >> m[i][j];
    }
}

Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();
    int p = b.size();
    int q = b[0].size();
    Matrix t(n, vector<int> (q,0));
    for (int i = 0; i < n; ++i) {
	for (int j = 0; j < q; ++j) {
	    for (int k = 0; k < p; ++k) {
		t[i][j] = t[i][j] + a[i][k]*b[k][j];
	    }
	}
    }
    return t;
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
    int a, b, c;
    cin >> a >> b >> c;
    Matrix mat_a(a, vector<int> (b));
    Matrix mat_b(b, vector<int> (c));
    leer_matrix(mat_a);
    leer_matrix(mat_b);
    Matrix result = product(mat_a, mat_b);
    mostrar_matrix(result);
}
