#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll arr[1001], max_cubes[10001];
    arr[0] = 0; 
    max_cubes[0] = 0;

    int n, res = 0;
    cin >> n;
    for (res = 1; res <= n; res++) {
        arr[res] = res + arr[res-1];
        max_cubes[res] = max_cubes[res-1] + arr[res];
        if (max_cubes[res] > n) {
            cout << res-1 << endl;
            break;
        } else if (max_cubes[res] == n) {
            cout << res << endl;
            break;
        }
    }
    return 0;
}