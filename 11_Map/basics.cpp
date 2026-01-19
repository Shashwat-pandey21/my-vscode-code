#include <bits/stdc++.h>
using namespace std;


int main(){

    //creation

    unordered_map <string,int> m;

    //insertion

    //1
    pair<string,int> p = make_pair("Ram",1);
    m.insert(p);

    //2
    pair<string,int> q("pandey",7);
    m.insert(q);

    //3

    m["shahswat"] = 21;

//---------------------------------------------------------------------------------------------//


    //searching

    cout << m["Ram"] << endl;
    cout<< m.at("pandey") << endl;

    cout<<m["unknown"] << endl;       //create entry
    cout<< m.at("unknown") << endl;

    //size
    cout << m.size() << endl;
    

    //to check presence
    cout << m.count("raj") << endl;

    //erase
    m.erase("Ram");
    cout << m.size() << endl;

    //iterator
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    return 0;

}