#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string forma;
	cin >> forma;
	if (forma == "rectangle") {
           double lenght, width;		
	   cin >> lenght >> width;
           cout << lenght*width << endl;
	}
	else if (forma == "circle") {
	    double radius;
	    cin >> radius;
            cout << M_PI*radius*radius << endl; 
	}
    }
}
