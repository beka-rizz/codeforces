#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char board[8][8];
        int r, c;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> board[i][j];
            }
        }

        for (int i = 1; i <= 6; i++) {
            for (int  j = 1; j <= 6; j++) {
                if (board[i][j] == '#' 
                    && board[i + 1][j + 1] == '#' 
                    && board[i - 1][j - 1] == '#' 
                    && board[i - 1][j + 1] == '#' 
                    && board[i + 1][j - 1] == '#')
                {
                    r = i + 1; 
                    c = j + 1;
                }
            }
        }
        cout << r << ' ' << c << endl;
    }

    return 0;
}