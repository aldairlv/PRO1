#include <iostream>
using namespace std;

int main () {
    string primera;
    cin >> primera;
    int count = 1;
    int max = 1;
    string actual;
    while (cin >> actual) {
        if (primera == actual) ++count;
	else if (actual != primera) count = 0;
	if (count > max) max = count;
    }
    cout << max << endl;

}
