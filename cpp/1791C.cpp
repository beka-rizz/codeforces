#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i = 0, cnt = 0;
        string s;
        cin >> n >> s;
        while (i < n/2 && int(s[i] - '0') ^ int(s[n - 1 - i] - '0') != 0) {
            cnt += 2;
            i++;
        }
        cout << n - cnt << endl;
    }

    return 0;
}