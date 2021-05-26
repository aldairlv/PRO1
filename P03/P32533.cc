//Control C202E
//Dado un natural n, n >= 1, dibuja una figura nxn.
//Input: Natural n >= 1.
//Output: La figura nxn.

#include <iostream>
using namespace std;

int main() {
    int n;  // natural n >= 1
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n - 1; ++j) cout << '+';
	cout << '/';
	for (int j = 0; j < i; ++j) cout << '*';
	cout << endl;
    }
}
