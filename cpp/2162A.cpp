    #include <iostream>
    using namespace std;

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, max = -1;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if (a[i] > max) max = a[i];
            }
            cout << max << endl;
        }

        return 0;
    }