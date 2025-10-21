#include <iostream>
using namespace std;

int findRes(int a, int b, int c) {
    if (a > max(b, c))
        return 0;
    else 
        return max(b, c) - a + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        cout << findRes(a, b, c) << ' ' << findRes(b, a, c) << ' ' << findRes(c, a, b) << endl; 
    }

    return 0;
}