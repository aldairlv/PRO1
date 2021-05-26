#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << "The number of digits of " << n << " is "; 
    if (n < 10) cout << 1 << '.'<< endl;
    else {
        int i = 0;
        while (n > 0) {
	    n = n / 10;
	    ++i;
	}
	cout << i << '.' <<endl;
    }    
}
