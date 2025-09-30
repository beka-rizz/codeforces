#include <iostream>
using namespace std;
 
int main() {
    int n;
    int x = 0;
    cin >> n;
    while (n > 0) {
        string s;
        cin >> s;
        if (s[0] == '+' || s[s.length()-1] == '+') {
            x++;
        } else {
            x--;
        }
        n--;
    }
    cout << x;
    return 0;
}