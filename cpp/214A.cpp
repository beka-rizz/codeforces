#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int a = 0; a <= max(n, m); a++) {
        for (int b = 0; b <= max(n, m); b++) {
            if (a * a + b == n && a + b * b == m)
                cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}