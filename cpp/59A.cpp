#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    string s_lower = s, s_upper = s;
    int upper_cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (int(s[i]) >= 97 && int(s[i]) <= 122) {
            s_upper[i] = char(s[i] - ' ');
        } else {
            s_lower[i] = char(s[i] + ' ');
            upper_cnt++;
        }
    }
    
    s = (upper_cnt > s.length() - upper_cnt) ? s_upper : s_lower;
    cout << s << endl;
    
    return 0;
}