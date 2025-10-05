#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, bad_odd = 0, bad_even = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 != 0) bad_odd++;
            if (i % 2 != 0 && a[i] % 2 == 0) bad_even++;
        }

        if (bad_even == bad_odd) cout << bad_even << endl;
        else cout << -1 << endl;

    }
    return 0;
}