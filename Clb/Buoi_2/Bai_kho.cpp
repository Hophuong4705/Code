#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141;

int main() {
    double r1, r2, a, b, x;
    cin >> r1 >> r2 >> a >> b >> x;

    double s1 = PI * r1 * r1;
    double s2 = PI * r2 * r2;
    double s = s1 + s2;

    double t = x / (a + b);
    double f = s * pow(2, -t);

    cout << fixed << setprecision(3) << f << endl;
    return 0;
}