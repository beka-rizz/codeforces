#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (int(s[0]) >= 97) 
        s[0] = char(s[0] - ' ');
    cout << s << endl;
    return 0;
}