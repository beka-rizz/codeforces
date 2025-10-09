#include <iostream>
using namespace std;

int main() {
    int n, cnt_x = 0, cnt_y = 0, cnt_z = 0;
    cin >> n;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        cnt_x += x;
        cnt_y += y;
        cnt_z += z;
    }
    if (cnt_x == 0 && cnt_y == 0 && cnt_z == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}