#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    double total = 0.0e-4;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        total += p;
    }
    cout << fixed << total / n << endl;
}