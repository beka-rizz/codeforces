#include <iostream>
using namespace std;

int main() {
    int n, m, c, m_wins = 0, c_wins = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> c;
        if (m > c) m_wins++;
        else if (m < c) c_wins++;
    }

    if (m_wins > c_wins) {
        cout << "Mishka\n";
    } else if (m_wins < c_wins) {
        cout << "Chris\n";
    } else 
        cout << "Friendship is magic!^^\n";
    
    return 0;
}