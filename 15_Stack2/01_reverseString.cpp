#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "pandey";

    stack<char>s;

    for(int i=0; i<str.size();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}