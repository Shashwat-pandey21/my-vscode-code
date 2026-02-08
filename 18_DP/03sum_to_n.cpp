
#include <bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> &dp) {

    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = n + helper(n - 1, dp);
   
}

int main() {

    int n = 5;
    vector<int> dp(n + 1, -1);

    int ans = helper(n, dp);
    cout << ans << endl;

    return 0;
}
