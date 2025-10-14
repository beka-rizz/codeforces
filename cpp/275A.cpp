#include <iostream>
using namespace std;

int main() {
    bool init[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            init[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int x;
            cin >> x;
            if (x & 1 == 1) {
                init[i][j] = !init[i][j];
                if (i - 1 >= 0) init[i-1][j] = !init[i-1][j];
                if (i + 1 < 3) init[i+1][j] = !init[i+1][j];
                if (j - 1 >= 0) init[i][j-1] = !init[i][j-1];
                if (j + 1 < 3) init[i][j+1] = !init[i][j+1];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (int)init[i][j];
        }
        cout << endl;
    }

    return 0;
}