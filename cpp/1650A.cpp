#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char c;
        int c_pos = -1;
        cin >> s >> c;

        for ( int i = 0 ;i < s.length(); i++) {
            if (s[i] == c && i % 2 == 0) {
                c_pos = i;
                break;
            }
        }

        if (c_pos != -1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}