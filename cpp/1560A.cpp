#include <iostream>
using namespace std;

bool divisibleByThree(int n) {
    return !(n % 3);
}

bool containsRightmostThree(int n) {
    return n % 10 == 3;
}

int main() {
    int ARR[1001];
    int j = 1;
    for (int i = 1; i <= 1000; i++) {
        while (divisibleByThree(j) || containsRightmostThree(j)) {
            j++;
        }
        ARR[i] = j;
        j++;
    }
    int t, k;
    cin >> t;

    while (t--) {
        cin >> k;
        cout << ARR[k] << endl;
    }
    return 0;
}