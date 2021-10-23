#include <iostream>
using namespace std;

int main() {
    string word1, word2;
    while (cin >> word1 >> word2) {
        if (word1 <  word2) cout << word1 << ' ' << word2;
        else cout << word2 << ' ' << word1;
	cout << endl;
    }
}
