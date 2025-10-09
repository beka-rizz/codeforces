#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    int i = 0, j = 0, cnt = 1, k = n;
    while (cnt <= n * n) {
        for (j = n - k; j < k; j++)
            a[i][j] = cnt++;
        j--;
        for (i = n - k + 1; i < k; i++) 
            a[i][j] = cnt++;
        i--;
        for (j = (k - 1) - 1; j >= n - k; j--) 
            a[i][j] = cnt++;
        j++;
        for (i = (k - 1) - 1; i > n - k; i--) 
            a[i][j] = cnt++;
        i++;
        k--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}