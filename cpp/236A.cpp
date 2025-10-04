#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> myset;
    for (int i = 0; i < s.length(); i++) {
        myset.emplace(s[i]);
    }
    if (myset.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}