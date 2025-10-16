#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        bool flag = true;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i] && (s1[i] == 'R' || s2[i] == 'R')) {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "");
    }
    return 0;
}