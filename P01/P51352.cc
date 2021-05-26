#include <iostream>
using namespace std;

int main() {
    char c1, c2;
    cin >> c1 >> c2;
    if (c1 != c2) {
        if (c1 == 'A') {
    	    if (c2 == 'P') cout << 1 << endl;
    	    else cout << 2 << endl;
    	}
    	
    	else if (c1 == 'P') {
    		 if (c2 == 'A') cout << 2 << endl;
    	     else cout << 1 << endl;
    	}
    	else {
    	     if (c2 == 'A') cout << 1 << endl;
    	     else cout << 2 << endl;
    	}
    }
    else cout << '-' << endl;


    
}