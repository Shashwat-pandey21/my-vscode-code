#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

bool solve(int n){

    if(n==0) return false;

    if (dp[n] != -1) {
        return dp[n];
    }

    int sq =0;
    for(int i=1; i<n; i++){
        sq = i*i;

        if(solve(n-sq) == false ) return dp[n] = true;
    }

return dp[n] = false;
}
int main(){
    int n; 
    cin >> n;

    dp.resize(n + 1, -1);

    if(solve(n)){
        cout << "Ture" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}