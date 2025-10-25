#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        set<char> c;
        for (int i = 0; i < s.length() / 2; i++) {
            c.emplace(s[i]);
        }
        if (c.size() > 1)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}