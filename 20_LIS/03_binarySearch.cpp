#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {

    if(nums.size() == 0) return 0;

    vector<int> ans;
    ans.push_back(nums[0]);

    for(int i = 1; i < nums.size(); i++) {

        if(nums[i] > ans.back()) {
            ans.push_back(nums[i]);
        }
        else {
            int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
            ans[index] = nums[i];
        }
    }

    return ans.size();
}

int main() {
    vector<int> nums = {10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(nums);
}
