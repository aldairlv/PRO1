#include <iostream>
using namespace std;


int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 < a2) return -1;
    else if (a1 > a2) return 1;
    else {
        if (m1 < m2) return -1;
        else if (m1 > m2) return 1;
        else {
            if (d1 < d2) return -1;
            else if (d1 > d2) return 1;
        }
    }
    return 0;

}



int main() {
    int d1, m1, a1;
    int d2, m2, a2;
    char c1, c2, c3, c4;
    while (cin >> d1 >> c1 >> m1 >> c2 >> a1 >> d2 >> c3 >> m2 >> c4 >> a2) {
        int result = compara (d1, m1, a1, d2, m2, a2);
        if (result == -1) cout << "anterior" << endl;
        else if (result == 1) cout << "posterior" << endl;
        else cout << "iguals" << endl;
    }
    
}
