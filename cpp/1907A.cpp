#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string board[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = char(j+'a') + to_string(i+1);
        }
    }

    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] != s && (s[0] == board[i][j][0] || s[1] == board[i][j][1]))
                    cout << board[i][j] << endl;
            }
        }
    }

    return 0;
}