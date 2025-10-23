#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i = 1;
        cin >> n;
        while (n--) {
            cout << i << ' ';
            i += 2;
            if ( i >= 1000)
                i /= 1000;
        }
        cout << endl;
    }

    return 0;
}