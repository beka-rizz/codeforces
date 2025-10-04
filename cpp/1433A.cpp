#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v = { 
    {1111, 10},
    {111, 6},
    {11, 3},
    {1, 1},
};

int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        for (auto p: v) {
            if (x % p.first == 0) {
                cout << p.second + (x / p.first - 1) * 10 << endl;
                break;
            }
        }
    }
    return 0;
}