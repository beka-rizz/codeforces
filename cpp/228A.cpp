#include <iostream>
using namespace std;

int main() {
    long long s1, s2, s3, s4;
    int cnt = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    
    if (s1 == s2) {
        cnt++;
        s2 = -1;
    }
    if (s1 == s3) {
        cnt++;
        s3 = -2;
    }
    if (s1 == s4) {
        cnt++;
        s4 = -3;
    }

    if (s2 == s3) {
        cnt++;
        s3 = -4;
    }
    if (s2 == s4) {
        cnt++;
        s4 = -5;
    }

    if (s3 == s4) {
        cnt++;
        s4 = -6;
    }

    cout << cnt << endl;
    return 0;
}