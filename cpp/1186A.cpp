#include <iostream>
using namespace std;

int main() {
    int n, m, k ;
    cin >> n >> m >> k;
    n <= min(m, k) ? (cout << "Yes\n") : cout << "No\n";

    return 0;
}