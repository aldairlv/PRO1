#include <iostream>
using namespace std;

int main() {
    int n, b;
    while (cin >> b >> n) {
        int count = 0;
    	while(n > 0) {
    		n = n / b;
    		++count;
    	}
    	cout << count << endl;
    }

}