#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m > n) {
            cout << "No\n";
            continue;
        } else {
            if ((n - m) % 2 == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}