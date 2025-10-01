#include <iostream>
using namespace std;

int main() {
    string s, t;
    bool isCorrect = true;
    cin >> s >> t;

    if (s.length() != t.length()) {
        isCorrect = false;
    }

    for (int i = 0; i < s.length() && isCorrect; i++) {
        if (s[i] != t[s.length() - 1 - i]) {
            isCorrect = false;
            break;
        }
    }

    if (isCorrect) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}