#include <iostream>
using namespace std;
int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double n;
    int i = 0;
    double suma = 0;
    while(cin >> n) {
       suma = suma + n;
       ++i;
    }
    cout << suma/i << endl;
}
