#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> l = {2, 1, 3};

    l.push_back(4);     // add at end
    l.push_front(0);    // add at start

    l.pop_back();       // remove end
    l.pop_front();      // remove start

    cout << l.front() << endl;   // first element
    cout << l.back() << endl;    // last element
    cout << l.size() << endl;    // total elements

    l.sort();           // sort list

    for(int x : l) cout << x << " ";   // print

    cout <<endl;

    l.reverse();        // reverse list

    for(int x : l) cout << x << " ";   // print

    return 0;
}
