#include <iostream>
using namespace std;

int main() {
    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << ' ' << b << endl;
    }
    return 0;
}