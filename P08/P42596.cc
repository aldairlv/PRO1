#include <iostream>
#include <vector>
using namespace std;


typedef vector<vector<int> > Matrix;

void leer_matrix (Matrix& mat) {
    int d =  mat.size();
    int k = mat[0].size();
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < k; ++j) cin >> mat[i][j];
    }
}

void min_max(const Matrix& mat, int& minimum, int& maximum) {
     int d = mat.size();
     int r = mat[0].size();
     maximum =  minimum = mat[0][0];
     for (int i = 0; i < d; ++i) {
         for (int j = 0; j < r; ++j) {
	     if (mat[i][j] > maximum) maximum = mat[i][j];
	     else if (mat[i][j] < minimum) minimum =  mat[i][j];
	 }
     }
}


int main() {
    int f, c;
    int min = 0;
    int max = 0;
    int diff = 0;
    int pos = 1;
    int count = 1;

    while (cin >> f >> c) {
        Matrix m (f, vector<int> (c));
        leer_matrix(m);
	min_max(m, min, max);
	int diference = max - min;
	if (diference > diff) {
	    diff = diference;
	    pos = count;
	}
	++count;
    }

    cout << "la diferencia maxima es " << diff << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << pos << endl;
}
