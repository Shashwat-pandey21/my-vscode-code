

#include<bits/stdc++.h>
using namespace std;

vector<string> res;

void permutation(string ans, string str , int i) {

   
    if(str.length() == 0){
        res.push_back(ans);
        return;
    }

    unordered_set<int> mp;  

    for(int i = 0; i < str.length(); i++){

        
        if(mp.find(str[i]) == mp.end()){

            mp.insert(str[i]);

            string newip = str.substr(0, i) + str.substr(i + 1);
            string newop = ans + str[i];

            permutation(newip,newop,i++ );
        }
    }
}

int main(){

    string str = "abc";

    permutation(" ", str,0);

    for(auto s : res){
        cout << s << endl;
    }

    return 0;
}
