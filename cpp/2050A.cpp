#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, res = 0, total = 0;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < n; i++) {
            if (total + s[i].length() <= m)
                res++;
            else
                break;
            total += s[i].length();
        }

        cout << res << endl;
    }

    return 0;
}