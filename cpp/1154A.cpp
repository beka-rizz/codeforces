#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a[4], maxi = 0;

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        if (maxi < a[i]) maxi = a[i];
    }

    for (int i = 0; i < 4; i++) {
        if (a[i] - maxi == 0) 
            continue;
        cout << maxi - a[i] << ' ';
    }

    return 0;
}