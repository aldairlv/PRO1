#include <iostream>
using namespace std;
 
int main() {
    char c;
    cin >> c;
    if (c >= 'a' and c <= 'z') cout << char('A' + c - 'a') << endl;
    else cout << char('a' + c - 'A') << endl;
    }

