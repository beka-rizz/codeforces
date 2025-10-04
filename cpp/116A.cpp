#include <iostream>
using namespace std;
int main() {
    int n, res = 0, cnt = 0;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cnt += (b - a);
        if (cnt > res) res = cnt;
    }
    cout << res << endl;
    return 0;
}