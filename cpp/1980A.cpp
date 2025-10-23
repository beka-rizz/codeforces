#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, cnt = 0;
        cin >> n >> m;
        map<char, int> mp = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}};
        string tasks;
        cin >> tasks;
        for (int i = 0; i < n; i++) {
            mp[tasks[i]]++;
        }

        for (auto x: mp) {
            if (x.second < m)
                cnt += m - x.second; // m = 2, x_i = 0, we have to add 2 tasks.
        }

        cout << cnt << endl;
    }

    return 0;
}