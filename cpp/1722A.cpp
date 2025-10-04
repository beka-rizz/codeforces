#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    string init = "Timru", s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        if (n != 5) {
            cout << "NO\n";
        } else {
            sort(s.begin(), s.end());
            if (s == init) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}