#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    long long b[n+1];
    b[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i+1] = b[i] + a[i];
    }

    for (int i = 0; i <= n; i++) {
        cout << b[i] << ' ';
    }
    return 0;
}