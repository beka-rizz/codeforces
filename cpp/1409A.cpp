#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, abs_diff;
        cin >> a >> b;
        abs_diff = abs(a-b);
        if (abs_diff % 10 == 0) cout << abs_diff / 10 << endl;
        else cout << abs_diff / 10 + 1 << endl;
    }
    return 0;
}