#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1 = 0, x2 = 1, x3, n;
    cin >> n;
    if (n == 0 || n == 1) {
        cout << 0;
        return(0);
    }
    cout << 0 << endl << 1 << endl;
    for (int f = 0; f < n - 2; f++) {
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
        cout << x3 << endl;
    }
    return(0);
}