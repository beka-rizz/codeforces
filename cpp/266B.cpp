#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while (t--) {
        bool perfectQueue = true;
        for (int i = 1; i < n; i++) {
        if (q[i] == 'G' && q[i-1] == 'B') {
            q[i] = 'B'; q[i-1] = 'G';
            perfectQueue = false;
            i++;
        }
        }
        if (perfectQueue) {
            cout << q << endl;
            return 0;
        }
    }

    cout << q << endl;

    return 0;
}