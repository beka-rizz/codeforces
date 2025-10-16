#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res[2] = {0};
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') res[0]++;
            else res[1]++;
        }
        
        if (res[0] > res[1])
            cout << "A\n";
        else 
            cout << "B\n";
    }
    return 0;
}