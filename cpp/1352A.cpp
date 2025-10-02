#include <iostream>
#include <set>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t > 0) {
        int multiplier = 1, cnt = 0;
        cin >> n;
        set<int> res;
        while (n > 0) {
            int rem = n % 10;
            if (rem != 0) {
                res.emplace(rem * multiplier);
                cnt++;
            } 
            multiplier *= 10;
            n /= 10;
        }
        cout << cnt << endl;
        for (int x: res) cout << x << ' ';
        cout << endl;
        t--;
    }
    return 0;
}