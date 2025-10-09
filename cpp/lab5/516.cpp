#include <iostream>
using namespace std;

int main() {
    // Lab5. Art
    int w, h, painted = 0;
    cin >> w >> h;
    int board[w+1][h+1];
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j <= h; j++) {
            board[i][j] = 0;
        }
    }
    int n;
    cin >> n;
    while (n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 || y1 == y2) continue;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                if (board[x][y] == 1)
                    continue;
                board[x][y] = 1;
                painted++;
            }
        }
    }
    cout << w * h - (painted + 1) / 2 << endl;
    
    return 0;
}