#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️ Simple pair
    pair<int, int> p = {10, 20};
    cout << p.first << " " << p.second << endl;



    // 2️ Pair with different data types
    pair<int, string> p2 = {1, "Ram"};
    cout << p2.first << " " << p2.second << endl;



    // 3️ make_pair()
    pair<int, int> p3 = make_pair(5, 6);
    cout << p3.first << " " << p3.second << endl;



    // 4️ Vector of pairs
    vector<pair<int,int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({2, 1});

    // print vector of pairs
    for(auto x : v){
        cout << x.first << " " << x.second << endl;
    }



    // 5️ Sorting pair (by first, then second)
    sort(v.begin(), v.end());



    cout << "After sorting:" << endl;
    for(auto x : v){
        cout << x.first << " " << x.second << endl;
    }



    // 6️ Nested pair
    pair<int, pair<int,int>> np = {1, {2, 3}};
    cout << np.first << " "
         << np.second.first << " "
         << np.second.second << endl;

    return 0;
}
