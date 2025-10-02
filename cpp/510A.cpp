#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool inRight = false;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << '#';
            }
        } else {
            inRight = !inRight;
            for (int j = 0; j < m; j++) {
                if (inRight && j == m - 1 || !inRight && j == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}