#include <iostream>

using namespace std;

long long largestPowerOf2(long long n) {
    if (n <= 0) return 0;
    
    long long p = 1;

    // while (p * 2 <= n) { => упрощаем
    //     p *= 2;
    // }
    
    while (p <= n / 2) {
        p *= 2;
    }
    return p;
}

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long P = largestPowerOf2(n);

    long long k_max = P - 1;

    cout << k_max << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        solve();
    }

    return 0;
}