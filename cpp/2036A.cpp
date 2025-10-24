#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool isPerfect = true;
        cin >> n;
        int notes[n];
        for (int i = 0; i < n; i++) {
            cin >> notes[i];
        }

        for (int i = 1; i < n; i++) {
            int diff = abs(notes[i]-notes[i-1]);
            if (!(diff == 5 || diff == 7))
            {
                isPerfect = false;
                break;
            }
        }

        if (isPerfect)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}