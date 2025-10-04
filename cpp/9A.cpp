#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

map<double, string> mp = {
    {(double) 0 / 1, "0/1"},
    {(double) 1 / 6, "1/6"},
    {(double) 1 / 3, "1/3"},
    {(double) 1 / 2, "1/2"},
    {(double) 2 / 3, "2/3"},
    {(double) 5 / 6, "5/6"},
    {(double) 1 / 1, "1/1"},
};

int main() {
    cout << fixed << setprecision(2);
    int y, w;
    cin >> y >> w;
    double res = (7.0-max(y, w))/6;
    cout << (*(mp.find(res))).second << endl;
    return 0;
}