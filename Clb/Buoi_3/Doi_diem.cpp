#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;

    if (a < 4) {
        cout << "F";
    } else if (a <= 5.4) {
        cout << "D";
    } else if (a <= 6.9) {
        cout << "C";  
    } else if (a <= 8.4) {
        cout << "B";
    } else if (a <= 10) {
        cout << "A";
    } else {
        cout << "ko hop le"; 
    }

    return 0;
}