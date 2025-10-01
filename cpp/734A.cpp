#include <iostream>
using namespace std;

int main() {
    int n, anton_cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') anton_cnt++;
    }
    
    if (anton_cnt > n - anton_cnt) {
        cout << "Anton" << endl;
    } else if (anton_cnt == n - anton_cnt) {
        cout << "Friendship" << endl;
    } else {
        cout << "Danik" << endl;
    }
    return 0;
}