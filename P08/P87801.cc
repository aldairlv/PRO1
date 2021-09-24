#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<char> > Tablero;
typedef vector< vector<int> > Matriz_puntos;

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

int calcula(Matriz_puntos& t, int i, int j, int s, int inci, int incj) {
    int result  = 0;
    for (int k = 0; k < s; ++k) {
	result = result + t[i][j];
	i = i + inci;
	j = j + incj;
    }
    return result;
}

int main() {
    int f,c;
    while (cin >> f >> c) {
	Tablero t(f, vector<char>(c));
	for (int i = 0; i < f; ++i) {
	    for (int j = 0; j < c; ++j) cin >> t[i][j];
	} 

	Matriz_puntos p(f, vector<int>(c));
	for (int i = 0; i < f; ++i) {
	    for (int j = 0; j < c; ++j) cin >> p[i][j];
	} 
	int n_palabras;
	cin >> n_palabras;
	for (int r = 0; r < n_palabras; ++r) {
	    string palabra;
	    cin >> palabra;
	    int max = -1;
            for (int i = 0; i < f; ++i) {
	    	for(int j = 0; j < c; ++j) {
	    	    if (esta(palabra, t, i, j, 0, 1)) {
			int h = calcula(p, i, j, palabra.size(), 0, 1);
			if (h > max) max = h;
		    }
                    if (esta(palabra, t, i, j, 1, 0)) {
			int v = calcula(p, i, j, palabra.size(), 1, 0);
			if (v > max) max = v; 
		    }

	    	}
            }
            if (max != -1) cout << max;
	    else cout << "no";
	    cout << endl;
        }
    }
}
