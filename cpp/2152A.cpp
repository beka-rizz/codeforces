#include <iostream>
#include <set>
using namespace std;

int findMin(int a[], int n) {
    int min = 1000;
    for (int i = 0; i < n; i++) {
        if (a[i] < min && a[i] != 0) {
            min = a[i];
        }
    }
    return min;
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void replace(int a[], int n, int min) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) a[i] = min;
    }
}

void subtract(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        a[i] -= k;
    }
}

bool nullCheck(int a[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.emplace(a[i]);
    }
    return s.size() == 1;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        int a[n];
        int min = 1000, cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        do {
            // print(a, n);
            min = findMin(a, n);
            // cout << "found minimum: " << min << endl;
            subtract(a, n, min);

            min = findMin(a, n);
            // print(a, n);
            cnt++;
            if (nullCheck(a, n)) {
                cout << cnt << endl;
                break;
            }
            replace(a, n, min);
            // print(a, n);
            cnt++;
            // cout << "End of loop: current cnt = " << cnt << endl;
        } while (min != 1000);
        t--;
    }
    return 0;
}