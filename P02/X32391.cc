#include <iostream>
using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t;
    int semana = 0;
    for (int i = 0; i < t; ++i) {
        int k;
	cin >> k;
	n = n + k - d;
	if (n > 0) ++semana;
    }
    cout << semana << endl;
}
