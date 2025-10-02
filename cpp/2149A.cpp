#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, cnt = 0, neg_cnt = 0;
        cin >> n;
        while (n > 0) {
            int a;
            cin >> a;
            if (a == 0) cnt++;
            else if (a == -1) neg_cnt++;
            n--;
        }
        if (neg_cnt % 2 != 0) cnt += 2;
        cout << cnt << endl;
        t--;
    }
    return 0;
}