#include <iostream>
using namespace std;

int main() {
    int n, min_abs_diff = INT32_MAX;
    pair<int, int> res;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = a[0];

    for (int i = 0; i < n; i++) {
        int j = i + 1;
        if (min_abs_diff > abs(a[i] - a[j])) {
            min_abs_diff = abs(a[i]-a[j]);
            res.first = i; res.second = j;
        }
    }

    cout << (res.first % n) + 1 << ' ' << (res.second % n) + 1 << endl;
    return 0;
}