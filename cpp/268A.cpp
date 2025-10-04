#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int h[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == h[j]) res++;
            if (h[i] == a[j]) res++;
        }
    }
    cout << res << endl;
    return 0;
}