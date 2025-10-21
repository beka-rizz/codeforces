#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    long long c = a ^ b;

    if (c <= a)
    {
        cout << 1 << endl;
        cout << c << endl;
        return;
    }

    if (a < b)
    {
        cout << -1 << endl;
        return;
    }

    int k = 0;
    if (c > 0)
    {
        k = floor(log2(c)) + 1;
    }
    long long P = 1LL << k;
    long long P_minus_1 = P - 1;

    long long x1 = a ^ P_minus_1;

    if (x1 > a)
    {
        cout << -1 << endl;
        return;
    }

    long long a1 = a ^ x1;

    long long x2 = a1 ^ b;

    if (x2 <= a1)
    {
        cout << 2 << endl;
        cout << x1 << " " << x2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}