#include <iostream>
using namespace std;


double factorial(int n) {
    if (n == 0) return 1;
    return n*factorial(n-1);
}

double exp(int n) {
    double result = 0;
    for (int i = 0; i < n; ++i) {
        result = result + 1./factorial(i);
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        cout << "Amb " << n << " terme(s) s'obte ";
        cout.setf(ios::fixed);
        cout.precision(10);
        cout << exp(n) << '.' << endl;
    }
}
