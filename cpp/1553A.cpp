#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::cout << (n + 1) / 10 << endl;
    }
    return 0;
}