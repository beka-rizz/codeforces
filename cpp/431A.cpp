#include <iostream>
using namespace std;

int main() {
    int a[4], cnt = 0;
    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
    for (int i = 0; i < s.length(); i++) {
        cnt += a[int(s[i] - '1')]; // int(s[i] - 1 - 48) => char(49) = '1';
    }
    cout << cnt << endl;
}