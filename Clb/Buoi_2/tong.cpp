#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, k, a, n;
    cin >> k >> m >> a;

    int s = a / 120;

    n = k - (m + s);
    
    cout << n << endl;

    return 0;
}