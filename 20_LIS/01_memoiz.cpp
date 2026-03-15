#include <bits/stdc++.h>
using namespace std;

int helper(vector<int>& nums, int i, int prev, vector<vector<int>>& dp) {

    if(i == nums.size()) return 0;

    if(dp[i][prev+1] != -1)  return dp[i][prev+1];
       

    int skip = helper(nums, i+1, prev, dp);

    int take = 0;

    if(prev == -1 || nums[i] > nums[prev]) {

        take = 1 + helper(nums, i+1, i, dp);

    }

    return dp[i][prev+1] = max(take, skip);
}

int lengthOfLIS(vector<int>& nums) {

    int n = nums.size();

    vector<vector<int>> dp(n, vector<int>(n+1, -1));
    
    return helper(nums, 0, -1, dp);
}

int main() {
    vector<int> nums = {10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(nums);
}
