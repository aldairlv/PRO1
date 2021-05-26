#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool primero = false;
    while (cin >> n >> m) {
        int ini = 9;
	if (primero) cout << endl;
	else primero = true;
        for (int i = 0; i < n; ++i) {
	     
	    for (int j = 0; j < m; ++j) {
	        if (ini < 0) ini = 9;
		cout << ini--;
	    }
	    cout << endl;
	}
        	
    }
}
