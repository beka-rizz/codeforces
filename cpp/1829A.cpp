#include <iostream>
using namespace std;

int main() {
    int t, cnt = 0;
    string goal = "codeforces", s;
    cin >> t;
    while (t--) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i])
                cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}