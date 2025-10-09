#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int winnerIndex = 0;
    int bestThrow = -1;
    int bestSum = -1;

    for (int i = 0; i < n; ++i) {
        int throws[1000];
        int totalSum = 0;
        int maxThrow = -1;

        for (int j = 0; j < m; ++j) {
            cin >> throws[j];
            totalSum += throws[j];
            if (throws[j] > maxThrow) {
                maxThrow = throws[j];
            }
        }

        if (maxThrow > bestThrow ||
           (maxThrow == bestThrow && totalSum > bestSum) ||
           (maxThrow == bestThrow && totalSum == bestSum && i < winnerIndex)) {
            winnerIndex = i;
            bestThrow = maxThrow;
            bestSum = totalSum;
        }
    }

    cout << winnerIndex << endl;
    return 0;
}
