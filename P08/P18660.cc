#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Tablero;

bool esta(const string& p, const Tablero& t, int i, int j, int inci, int incj) {
    int k = 0; // indice sobre p
    while (k < p.size() and i < t.size() and j < t[i].size()) {
	if (p[k] != t[i][j]) return false;
	i = i + inci;
	j = j + incj;
	++k;
    }
    return k == p.size();
}

void mayusculas(Tablero& t, int i, int j, int s, int inci, int incj) {
    for (int k = 0; k < s; ++k) {
	if ('a' <= t[i][j] and t[i][j] <= 'z') t[i][j] = 'A' + t[i][j] - 'a';
	i = i + inci;
	j = j + incj;
    }
}

void mostrar_matrix(const Tablero& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
	    if (j != 0) cout << " ";
	    cout  << m[i][j];
	}
        cout << endl;
    }
}

int main() {
    int z = 0;
    int x, m, n;
    while (cin >> x >> m >> n) {
        vector<string> palabras(x);
	for (int i = 0; i < x; ++i) cin >> palabras[i];

	Tablero t(m, vector<char>(n));
	for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) cin >> t[i][j];
	}

	Tablero copia = t;
	// encontrar palabras
	for (int k = 0; k < x; ++k) {
            string p = palabras[k];
	    for (int i = 0; i < m; ++i) {
                for(int j = 0; j < n; ++j) {
	    	    if (esta(p, copia, i, j, 0, 1)) mayusculas(t, i, j, p.size(), 0, 1);
	    	    if (esta(p, copia, i, j, 1, 0)) mayusculas(t, i, j, p.size(), 1, 0);
	    	    if (esta(p, copia, i, j, 1, 1)) mayusculas(t, i, j, p.size(), 1, 1);
	    	}
	    }
	}
	// escribir tablero
	if(z > 0)cout << endl;
	mostrar_matrix(t);
	z++; 	     
    }
}
