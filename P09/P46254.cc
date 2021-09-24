#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double dist(const Point& a, const Point& b) {
    double r = b.x - a.x;
    double s = b.y - a.y;
    r = r*r;
    s = s*s;
    return sqrt(r+s);
}

void read_point(Point& n) {
    cin >> n.x >> n.y;
}

int main() {
    Point a, b;
    read_point(a);
    read_point(b);
    cout << dist(a,b) << endl;
}
