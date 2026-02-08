#include<bits/stdc++.h>
using namespace std;

    void helper(string s,int idx , vector<string>&ans){


        if(idx>= s.size()) {
        
            ans.push_back(s) ;
            return;
        }


        for(int i = idx;i<s.size();i++){

            swap(s[idx],s[i]);

            helper(s,idx+1,ans);

            swap(s[i],s[idx]);

        }
    }
    
int main(){

    string s = "abc";

    vector<string>ans;

    helper(s,0,ans);

    for(int i=0; i<ans.size();i++){

        cout << ans[i] << " ";
    }

    return 0;
}