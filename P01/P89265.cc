#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1>> a2 >> b2;
    if (a1 == a2 and b1 == b2) cout << "= , " << '[' << a1 << ',' << b1 << ']' << endl;
    else if (a1 <= a2 and b2 <= b1) cout << "2 , " << '[' << a2 << ',' << b2 << ']' << endl; 
    else if (a2 <= a1 and b1 <= b2) cout << "1 , " << '[' << a1 << ',' << b1 << ']' << endl;
    else if (b1 < a2 or b2 < a1) cout << "? , []" << endl;
    else {
        cout << "? , ";
    	cout << '[';
    	if (a2 >= a1)  cout << a2;
    	else cout << a1;
    	cout << ',';
    	if (b1 <= b2) cout << b1 << ']' << endl;
    	else  cout << b2<< ']' << endl;
    }  
}