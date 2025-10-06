#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int left_cnt = 0, right_cnt = 0;
        cin >> s;
        for (int i = 0; i < s.length()/2; i++) {
            left_cnt += int(s[i] - '0');
            right_cnt += int(s[s.length()/2+i] - '0');
        }

        if (left_cnt == right_cnt) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}