#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
int a,b,c;

int helper(int n){

    if(n == 0) return 0;
    if(n < 0) return INT_MIN;

    if(dp[n] != -1) return dp[n];

    int cutA = 1 + helper(n-a);
    int cutB = 1 + helper(n-b);
    int cutC = 1 + helper(n-c);

    return dp[n] = max(max(cutA, cutB), cutC);
}

int main(){

    int n;
    cin >> n >> a >> b >> c;

    dp.assign(n+1 , -1);

    cout << helper(n);
}
