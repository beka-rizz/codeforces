#include <iostream>
using namespace std;

int main() {
    int points[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j >= 10) 
                points[i][j] = 10 - max(i, j);
            else
                points[i][j] = min(i+1, j+1);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int total = 0;
        char target[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> target[i][j];
                if (target[i][j] == 'X') total += points[i][j];
            }
        }
        cout << total << endl;
    }
    return 0;
}