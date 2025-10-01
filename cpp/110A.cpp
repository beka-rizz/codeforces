#include <iostream>
#define ull unsigned long long
using namespace std;

int main() {
    ull n, cnt = 0;
    cin >> n;
    bool isAlmostHappyNumber = true;
    while (n > 0) {
        ull rem = n % 10;
        if (rem == 4 || rem == 7) {
            cnt++;
        }  
        if (cnt > 7) {
            isAlmostHappyNumber = false;
            break;
        }
        n /= 10;
    }
    if (isAlmostHappyNumber && (cnt == 4 || cnt == 7)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}