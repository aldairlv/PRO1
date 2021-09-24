#include <iostream>
#include <vector>
using namespace std;


string sortida(int p, vector<int>& v) {
    int l = v.size();
    if (p + v[p] >= l) return "dreta";
    if (p + v[p] < 0) return "esquerra";
    if (v[p] == 0) return "mai";
    int aux = v[p];
    v[p] = 0;
    return sortida(p + aux, v);
}


int main() {
    int p, n;
    while (cin >> p >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << sortida(p, v) << endl;
    }
}
