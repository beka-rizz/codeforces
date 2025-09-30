#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}