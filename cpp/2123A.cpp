#include <iostream>
using namespace std;

int main()
{
    int numbers[100]; // 0 - Alice wins, 1 - Bob wins
    for (int i = 0; i < 100; i++)
    {
        numbers[i] = 0;
        if (i % 4 == 3)
            numbers[i] = 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        (numbers[n - 1]) ? cout << "Bob\n" : cout << "Alice\n";
    }

    return 0;
}