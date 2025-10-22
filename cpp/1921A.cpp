#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t, x, y, res;
    cin >> t;
    while (t--)
    {
        res = 1;
        map<int, int> mp;
        for (int i = 0; i < 4; i++) {
            cin >> x >> y;
            if (mp.find(x) != mp.end()) {
                mp[x] = abs(mp[x] - y);
            } else {
                mp[x] = y;
            }
        }

        for (auto c: mp)
            res *= c.second;

        cout << res << endl;
    }

    return 0;
}