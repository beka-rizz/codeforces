#include <iostream>
using namespace std;

string getDivision(int rating) {
    if (rating >= 1900) 
        return "Division 1";
    if (rating >= 1600)
        return "Division 2";
    if (rating >= 1400) 
        return "Division 3";
    return "Division 4";
}

int main() {
    int t, rating;
    cin >> t;
    while (t--) {
        cin >> rating;
        cout << getDivision(rating) << endl;
    }
    return 0;
}