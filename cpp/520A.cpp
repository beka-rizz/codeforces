#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    string s;
    set<char> res;
    cin >> n >> s;
    while (n--) {
        if (s[n] <= 'Z') s[n] = char(s[n]+' ');
        res.emplace(s[n]);
    }
    if (res.size() == 26) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}