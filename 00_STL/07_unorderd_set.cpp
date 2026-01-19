#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️ declaration
    unordered_set<int> us;

    // 2️ insert (duplicate ignore)
    us.insert(10);
    us.insert(5);
    us.insert(10);
    us.insert(7);

    // 3️ size
    cout << us.size() << endl;

    // 4️ find (element exist or not)
    if(us.find(5) != us.end())
        cout << "Found" << endl;

    // 5️ erase
    us.erase(7);

    // 6️ loop (random order)
    for(int x : us)
        cout << x << " ";

    return 0;
}
