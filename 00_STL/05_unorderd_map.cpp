#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️ declaration
    unordered_map<int, string> ump;

    // 2️ insert
    ump[1] = "Ram";
    ump[3] = "Shyam";
    ump[2] = "Mohan";

    // 3️ insert using insert()
    ump.insert({4, "Aman"});

    for(auto x : ump){
        cout << x.first << " " << x.second << endl;
    }

    
    // 4️ access
    cout << ump[2] << endl;

    // 5️ size
    cout << ump.size() << endl;

    // 6️ find
    if(ump.find(3) != ump.end())
        cout << "Key found" << endl;

    // 7️ erase
    ump.erase(1);

    // 8️ loop (random order)
    for(auto x : ump){
        cout << x.first << " " << x.second << endl;
    }

    // 9️ count
    cout << ump.count(2) << endl;

    return 0;
}
