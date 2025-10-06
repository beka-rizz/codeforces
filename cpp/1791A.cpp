#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    char c;
    set<char> s = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    cin >> t;
    while (t--) {
        cin >> c;
        if (s.find(c) != s.end()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}