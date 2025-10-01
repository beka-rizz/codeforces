#include <iostream>
#include <set>
using namespace std;

int main() {
    // complementary counting - метод дополнения
    long long s1, s2, s3, s4;
    set<long long> res;
    cin >> s1 >> s2 >> s3 >> s4;
    res.emplace(s1);
    res.emplace(s2);
    res.emplace(s3);
    res.emplace(s4);
    cout << 4 - res.size() << endl;
    return 0;
}