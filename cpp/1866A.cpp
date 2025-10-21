#include <iostream>
using namespace std;

int main() {
    int n, minVal = 100000;
    cin >> n;
    int a[n];
    bool containsZero = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) containsZero = true;
        if (i > 0) minVal = min(abs(a[i-1]), minVal);
    }

    if (containsZero) {
        cout << 0 << endl;
        return 0;
    }

    if (n > 1) {
        minVal = min(minVal, abs(a[n-1]));
        cout << minVal << endl;
        return 0;
    }

    cout << abs(a[0]) << endl;
    return 0;
}