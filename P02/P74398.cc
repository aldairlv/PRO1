#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= 16; ++i) {
        cout << "Base " << i << ": "; 
	int k = 0;
	int aux = n;
	while (aux > 0) {
	    aux = aux / i;
	    ++k;
	}
	cout << k << " cifras." << endl;
    }
}
