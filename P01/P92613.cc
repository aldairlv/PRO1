#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    if (a - int(a) < 0.5 and a - int(a) > 0) cout << int(a) << ' ' << int(a) + 1 << ' ' << int(a) << endl;
    else if ( a - int(a) >= 0.5) cout << int(a) << ' ' << int(a) + 1 << ' ' << int(a) + 1 << endl; 
    else cout << int(a) << ' ' << int(a) << ' ' << int(a) << endl;
}
