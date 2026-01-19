#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1 map declaration    <key,value>
    map<int, string> mp;

    // 2️ insert values    map[key] = value
    mp[1] = "Ram";
    mp[3] = "Shyam";
    mp[2] = "Mohan";

    // 3️ insert using insert()
    mp.insert({4, "Aman"});

    //print map
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }


    // 4️ access value
    cout << mp[2] << endl;

    // 5️ size
    cout << mp.size() << endl;

    // 6️ find()
    if(mp.find(3) != mp.end())
        cout << "Key found" << endl;

    // 7️ erase()
    mp.erase(1);

    // 8️ loop (sorted order)
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }

    // 9️ count() → key exists or not
    cout << mp.count(2) << endl;   // 1 or 0

    return 0;
}
