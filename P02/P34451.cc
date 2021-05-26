#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    int i = 0;
    while (cin >> k) {
         if (k%n == 0) ++i;
    }
    cout << i << endl;
}
