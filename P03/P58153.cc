#include <iostream>
using namespace std;

int main (){
    int n, m;
    while (cin >> n >> m) {
	double result = 0;
        for (int i = m + 1; i <= n; ++i) {
	    result = result + 1 / double(i);
	}
	cout.setf(ios::fixed);
        cout.precision(10);
	cout << result << endl;
    }
}
