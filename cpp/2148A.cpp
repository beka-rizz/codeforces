#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> x >> n;
        if (n & 1)
            cout << x << endl;
        else 
            cout << 0 << endl;
    }

    return 0;
}