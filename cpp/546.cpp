#include <iostream>
using namespace std;
 
int main() {
    int k, n, w;
    // arithmetic sequence problem
    
    // a_n = a_1 + (n-1)*d
    // sum: S_n = (n/2)*(2*a_1 +(n-1)*d)
    // here: k = a_1 = d, w = n
    
    // total = (w/2)*(2*k+(w-1)*k) = w*k*(w+1)/2
    cin >> k >> n >> w;
    int total = w*k*(w+1)/2;
    if (total > n) {
        cout << total - n;
    } else {
        cout << 0;
    }
    return 0;
}