#include <iostream>
#include <set>
using namespace std;

int main() {
    int y;
    cin >> y;
    set<char> s;
    string t;
    while (s.size() != 4) {
        s.clear();
        t = to_string(++y);
        for (int i = 0; i < t.length(); i++) {
            s.emplace(t[i]);
        }
    }
    cout << t << endl;
    return 0;
}