#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, m = 101;
        set<int> res;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < m) 
                m = x;
            else if (x > m) 
                res.emplace(i+1);
        }

        cout << res.size() << endl;
        for (auto x: res)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}