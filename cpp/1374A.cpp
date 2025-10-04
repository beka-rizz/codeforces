#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    ll x, y, n;
    while (t--) {
        cin >> x >> y >> n;
        ll res = n - n % x + y;
        if (res > n) res -= x;
        cout << res << endl;
    }
    return 0;
}