#include <iostream>
using namespace std;

int main() {
    int t;
    string b, a;
    cin >> t;
    while (t--) {
        cin >> b;
        a += b[0];
        for (int i = 1; i < b.length() - 1; i+=2) {
            a += b[i];
        }
        a += b[b.length()-1];
        cout << a << endl;
        a = "";
    }
    return 0;
}