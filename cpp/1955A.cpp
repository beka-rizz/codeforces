#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (n % 2)
            cout << (n / 2) * min(a*2,b) + a << endl;
        else
            cout << n / 2 * min(a*2,b) << endl;
    }

    return 0;
}