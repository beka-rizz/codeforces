#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    for (int i = 0; i < s1.length(); i++) {
        int k = int(s1[i]) % 32; 
        int j = int(s2[i]) % 32;
        if (k > j) {
            res = 1;
            break;
        } else if (k < j) {
            res = -1;
            break;
        }
    }
    cout << res << endl;
}