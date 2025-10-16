#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (!(ceil((max(a, b) - 1) / 2) <= min(a, b))) {
            cout << "NO\n";
            continue;
        } else {
            if (!(ceil((max(c - a, d - b) - 1) / 2) <= min(c - a, d - b)))
                cout << "NO\n";
            else 
                cout << "YES\n";
        }

    }

    return 0;
}