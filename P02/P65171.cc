#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    double parte1, parte2;
    parte1 = parte2 = 0;
    for (int i = 0; i < n; ++i) {
        double d;
	cin >> d;
	parte1 = parte1 + d*d;
	parte2 = parte2 + d;
    }
    parte1 = (1./(n-1))*parte1;
    parte2 = (1./(n*(n-1)))*parte2*parte2;
    cout << parte1-parte2 << endl;
}
