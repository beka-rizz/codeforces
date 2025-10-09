#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:\n";
    for (int j = 0; j < m; j++) {
        int mini = 1e6, x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (mini > a[i][j]) {
                mini = a[i][j];
                x = i;
                y = j;
            }
        }
        cout << x+1 << ';' << y+1 << endl;
        cnt += mini;
    }
    cout << "\nTheir sum:\n" << cnt << endl;

    return 0;
}