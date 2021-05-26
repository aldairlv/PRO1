#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
       for (int i = b; i >= a; --i) {
           cout << i << endl;
       }
       
    }
    else if (b < a) {
         for (int i = a; i >= b; --i) {
	     cout << i << endl;
	 }
	 
    }
    else cout << a << endl;
    }


