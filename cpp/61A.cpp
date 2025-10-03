#include <iostream>
using namespace std;
int main() {
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        s3 += to_string(int(s1[i] - '0') ^ int(s2[i] - '0'));
    }
    cout << s3 << endl;
    return 0;
}