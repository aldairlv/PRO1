#include <iostream>
using namespace std;

int main () {
    char c;
    int result = 0;
    while (cin >> c) {
        if (c == 'a' or c == 'e') ++result;
        else if (c == 'o' or c == 's') result += 2;
        else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') result += 3;
        else if (c == 'c' or c == 'l' or c == 't' or c == 'u') result += 4;
        else if (c == 'm' or c == 'p') result += 5;
        else if (c == 'k' or c == 'w') result += 7;
        else {
            if (c != ' ') result += 6;
        }
    }
    cout << result << endl;
}
