#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v;

    for (int i = 0; i <= s.length(); i+=2) {
        v.push_back(int(s[i]-'0'));
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it = v.begin();
    while (it != v.end() - 1) {
        cout << *it << '+';
        it++;
    }
    cout << *it << endl;
    return 0;
}