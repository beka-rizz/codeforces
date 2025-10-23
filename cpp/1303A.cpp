#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> indicesOfOnes;
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                if (indicesOfOnes.size() > 0) {
                    int lastIndexOfOne = indicesOfOnes.back(); // last occurence of one
                    if (lastIndexOfOne != i + 1) { // if they are not consecutive, we have some gap between them
                        res += (i - lastIndexOfOne) - 1;
                    }
                }
                indicesOfOnes.push_back(i);
            }
        }
        cout << res << endl;
    }

    return 0;
}