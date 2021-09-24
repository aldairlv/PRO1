#include <iostream>
using namespace std;


struct Time {
    int hour, minute, second;
};

void incrementa(Time& t1) {
    t1.second =  t1.second + 1;
    if (t1.second == 60) {
        t1.second = 0;
        t1.minute = t1.minute + 1;
        if (t1.minute == 60) {
            t1.minute = 0;
            t1.hour = t1.hour + 1;
            if (t1.hour == 24) {
                t1.hour = 0;
            }
        }
    }
}


void decrementa(Time& t2) {
    t2.second =  t2.second - 1;
    if (t2.second == -1) {
        t2.second = 59;
        t2.minute = t2.minute - 1;
        if (t2.minute == -1) {
            t2.minute = 59;
            t2.hour = t2.hour - 1;
            if (t2.hour == -1) {
                t2.hour = 23;
            }
        }
    }
}

void one_second(const Time& t, Time& t1, Time& t2) {
    t1 = t2 = t;
    incrementa(t1);
    decrementa(t2);
}


int main() {
    Time t;
    while (cin >> t.hour >> t.minute >> t.second) {
        Time t1, t2;
        one_second(t, t1, t2);
        cout << t1.hour << ' ' << t1.minute << ' ' << t1.second << endl;
        cout << t2.hour << ' ' << t2.minute << ' ' << t2.second << endl;
    }
}
