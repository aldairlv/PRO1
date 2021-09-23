#include <iostream>
#include <vector>
using namespace std;


int posicio(double x, const vector<double>& v, int esq, int dre) {
    if (esq > dre) return -1;
    int mitad = (esq + dre)/2;
    if (x < v[mitad]) return posicio(x, v, esq, mitad - 1);
    if (x > v[mitad]) return posicio(x, v, mitad + 1, dre);
    return mitad;
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, V, esq, dre) << endl;
        }
    }
}
