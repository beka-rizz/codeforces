#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t;
    ll a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a <= b) {
            cout << b-a << endl;
            continue;
        } else if (a % b == 0) {
            cout << 0 << endl;
            continue;
        }
        cout << b - (a % b) << endl;
    }
    return 0;
}