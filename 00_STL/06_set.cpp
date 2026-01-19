#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️ declaration
    set<int> st;

    // 2️ insert (duplicate ignore ho jaata hai)
    st.insert(10);
    st.insert(5);
    st.insert(10);
    st.insert(7);

    // 3️ size
    cout << st.size() << endl;

    // 4️ find (element exist or not)
    if(st.find(5) != st.end())
        cout << "Found" << endl;

    // 5️ erase
    st.erase(7);

    // 6️ loop (sorted order)
    for(int x : st)
        cout << x << " ";

    return 0;
}
