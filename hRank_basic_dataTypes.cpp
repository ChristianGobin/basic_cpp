#include <iostream>
using namespace std;

int main() {
    int x;
    long l;
    char c;
    float f;
    double d;
    cin >> x >> l >> c >> f >> d;
    cout << x << endl;
    cout << l << endl;
    cout << c << endl;
    printf("%.3f\n", f);
    printf("%.9lf\n", d);
    return 0;
}