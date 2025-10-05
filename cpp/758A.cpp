#include <iostream>
using namespace std;

int main() {
    int n, maxi = -1, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxi) maxi = a[i];
    }

    for (int i = 0; i < n; i++) {
        cnt += (maxi - a[i]);
    }
    cout << cnt << endl;
    return 0;
}