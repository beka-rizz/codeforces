#include <iostream>
using namespace std;

int main() {
    int n, x, res = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        res |= x;
    }
    if (res) cout << "HARD\n";
    else cout << "EASY\n";
    return 0;
}