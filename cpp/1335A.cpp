#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    double n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        cout << (long long) (ceil(n/2) - 1) << endl;
        t--;
    }

    return 0;
}