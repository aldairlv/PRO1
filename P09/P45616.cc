#include <iostream>
using namespace std;

struct Rellotge {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};

Rellotge mitja_nit() {
    Rellotge reloj;
    reloj.h = 0;
    reloj.m = 0;
    reloj.s = 0;
    return reloj;
}

void incrementa(Rellotge& r) {
    r.s = r.s + 1;
    if (r.s == 60) {
        r.s = 0;
	r.m  = r.m + 1;
	if (r.m == 60) {
	    r.m = 0;
	    r.h = r.h + 1;
	    if (r.h == 24) {
	        r.h = 0;
	    }
	}
    }
}

void escriu(const Rellotge& r) {
    if (r.h < 10) cout << 0;
    cout << r.h << ':';
    if (r.m < 10) cout << 0;
    cout << r.m << ':';
    if (r.s < 10) cout << 0;
    cout << r.s << endl;
}

int main() {
    Rellotge r1;
    r1 = mitja_nit();
    incrementa(r1);
    escriu(r1); 
}
