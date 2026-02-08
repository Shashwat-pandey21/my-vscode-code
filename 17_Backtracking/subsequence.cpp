#include <bits/stdc++.h>
using namespace std;

void helper(string str, vector<string> &ans, string output, int i){

    // base case
    if (i >= str.length()){
    
        ans.push_back(output);
        return;
    }

    // take
    output.push_back(str[i]);
    helper(str, ans, output, i + 1);

    // not take
    output.pop_back();
    helper(str, ans, output, i + 1);
}

int main(){

    string str = "abc";
    vector<string> ans;

    string output = "";

    int i = 0;

    helper(str, ans, output, 0);

    for (int i = 0; i <= ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}