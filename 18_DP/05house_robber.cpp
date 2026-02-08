#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int helper(vector<int>& nums, int i) {
   
    if (i >= nums.size()) return 0;

    
    if (dp[i] != -1) return dp[i];

    
    int pick = nums[i] + helper(nums, i + 2);
    int notPick = helper(nums, i + 1);

    return dp[i] = max(pick, notPick);
}

int main() {
    int n;
    cout << "Enter number of houses: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter money in each house:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

   
    dp.assign(n, -1);

    int ans = helper(nums, 0);

    cout << "Maximum money that can be robbed = " << ans << endl;

    return 0;
}
