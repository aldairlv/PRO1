#include <iostream>
using namespace std;

int main() {
    string palabra;
    bool ini = false;
    bool end = false;
    int count = 0;
    while (not end and cin >> palabra) {
        if (palabra == "principi") ini = true;
	else if (palabra == "final") end = true;
	else if (ini) ++count;
    }
    if (ini and end) cout << count << endl;
    else cout << "sequencia incorrecta" << endl;
}
