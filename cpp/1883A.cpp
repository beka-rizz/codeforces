#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int res = 0;
        cin >> s;
        if (s[0] == '0')
            res += 10;
        res += int(s[0] - '0') - 1; // moves needed for starting position
        for (int i = 1; i < 4; i++) {
            int cur = int(s[i] - '0');
            if (cur == 0) cur = 10;

            int prev = int(s[i-1] - '0');
            if (prev == 0) prev = 10;

            res += abs(cur - prev); // distance between neighbour numbers
        }
        res += 4; // add the click action for each number
        cout << res << endl;
    }

    return 0;
}