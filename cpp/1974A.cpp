#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, res;
        cin >> x >> y;
        int screen_min_y = ceil(y / 2.0); // min number of screens for bigger icons
        int empty_screen_left = 15 * screen_min_y - y * 4; // space left after putting bigger icons
        if (empty_screen_left >= x)
            res = screen_min_y;
        else
            res = screen_min_y + ceil((x - empty_screen_left) / 15.0);

        cout << res << endl;
    }
    return 0;
}