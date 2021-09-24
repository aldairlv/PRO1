#include <iostream>
using namespace std;
 
void convergeix(int n, int& k, int& lluny) {
    k = 0;
    lluny = 1;
    while (n != 1) {
        if (n > lluny) lluny = n;
        if (n%2 == 0) n = n/2;
        else n = n*3 + 1;
        ++k;
    }
}
 
int main() {
    int m, p;
    cin >> m >> p;
    int k, lluny = 1, lluny_ant;
 
    for (int i = 1; i <= m; ++i) {
        convergeix(i, k, lluny_ant);
        if (k >= p) cout << i << endl;
        if (lluny_ant > lluny) lluny = lluny_ant;
    }
    cout << "S'arriba a " << lluny << "." << endl;
}
