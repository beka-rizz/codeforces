#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, a, b, c;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());

        string res = (v[0] + v[1] == v[2]) ? "YES" : "NO";
        cout << res << endl;
        v.clear();
    }
    return 0;
}