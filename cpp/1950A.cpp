#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a < b) {
            if (b < c) cout << "STAIR\n";
            else if (b > c) cout << "PEAK\n";
            else cout << "NONE\n";
        } else cout << "NONE\n";
    }
    return 0;
}