#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int i = n + 1;
    for (; i <= m; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            } 
        }
        if (isPrime) {
            if (i == m) cout << "YES\n";
            else cout << "NO\n";
            return 0;
        } else if (!isPrime && i == m) {
            cout << "NO\n";
        }
    }
    
    return 0;
}