#include <iostream>
using namespace std;

int main() {
    int n, prev = -1, cnt = 1;
    cin >> n;
    while (n > 0) {
        int x;
        cin >> x;
        if (prev != -1 && prev != x) cnt++;
        prev = x;
        n--;
    }
    cout << cnt << endl;
    return 0;
}