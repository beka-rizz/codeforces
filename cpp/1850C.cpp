#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char c[8][8];
        string res = "";
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> c[i][j];
                if (c[i][j] != '.')
                    res += c[i][j];
            }
        }

        cout << res << endl;
    }

    return 0;
}