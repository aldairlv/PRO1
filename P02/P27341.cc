#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
    	int result = 0;
    	cout << "suma dels cubs entre " << a << " i " << b << ": ";
        for (int i = a; i <= b; ++i) {
        	result = result + i*i*i;
        }
        cout << result << endl;
    }
}

