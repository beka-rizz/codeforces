#include <iostream>
using namespace std;

int main() {
    int n, p, q, x;
    cin >> n;
    bool levels[100];
    
    for (int i = 0; i < 100; i++) {
        levels[i] = 0;
    }

    cin >> p;
    while (p--) {
        cin >> x;
        levels[--x] = 1;
    }
    cin >> q;
    while (q--) {
        cin >> x;
        levels[--x] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (!levels[i]) {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }

    cout << "I become the guy.\n";

    return 0;
}