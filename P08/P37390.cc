#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

void leer_matrix(Matrix& m) {
    int d = m.size();
    for (int i = 0; i < d; ++i) {
	for(int j = 0; j < d; ++j) cin >> m[i][j];
    }
}

Matrix product(const Matrix& a, const Matrix& b) {
    int k = a.size();
    Matrix t(k, vector<int> (k,0));
    for (int i = 0; i < k; ++i) {
	for(int j = 0; j < k; ++j) {
	    for (int r = 0; r < k; ++r) {
		t[i][j] = t[i][j] + a[i][r]*b[r][j];
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
    int n;
    cin >> n;
    Matrix mat_a(n, vector<int> (n));
    Matrix mat_b(n, vector<int> (n));
    leer_matrix(mat_a);
    leer_matrix(mat_b);
    Matrix result = product(mat_a, mat_b);
    mostrar_matrix(result);
}
