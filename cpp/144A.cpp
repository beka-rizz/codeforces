#include <iostream>
using namespace std;

int main() {
    int n, pos_min, pos_max, min_h = 101, max_h = -1, res = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= min_h) {
            min_h = a[i];
            pos_min = i;
        }
        if (a[i] > max_h) {
            max_h = a[i];
            pos_max = i;
        }
    }

    if (pos_max == 0 && pos_min == n-1) {
        cout << res << endl;
        return 0;
    }

    res = pos_max + (n - 1 - pos_min);
    if (pos_min < pos_max) {
        cout << res - 1 << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}