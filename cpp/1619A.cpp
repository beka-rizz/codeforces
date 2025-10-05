#include <iostream>
using namespace std;

int main() {
    int t;
    bool isQuadratic = true;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() & 1 != 0)
            cout << "NO\n";
        else {
            for (int i = 0; i < s.length()/2; i++) {
                if (s[i] != s[s.length()/2+i]) {
                    cout << "NO\n";
                    isQuadratic = false;
                    break;
                }
            }
            if (isQuadratic) {
                cout << "YES\n";
            }
            isQuadratic = true;
        } 
    }
    return 0;
}