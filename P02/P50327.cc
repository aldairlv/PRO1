#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n < 10) cout << n << endl;
    else { 
    while (n > 0) {
    cout << n%10;
    n = n/10;
        
    }
    cout << endl;
 }}
