#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 10; ++i) {
        cout << n << '*' << i + 1 << " = " << n * (i + 1) << endl;
    }
}
