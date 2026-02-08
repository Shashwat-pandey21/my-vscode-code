#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(7);
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    int day = 0; 
    while (true) {
        n -= a[day];
        if (n <= 0) {
            cout << day + 1 << endl; 
            break;
        }
        day = (day + 1) % 7;
    }

    return 0;
}
