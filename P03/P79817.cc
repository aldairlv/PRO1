#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
	int result = 1;
        for (int i = 0; i < b; ++i) {
	    result = result * a;
	}
	cout << result << endl;
    }
}
