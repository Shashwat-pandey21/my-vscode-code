#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    
    vector<int> temp;   
    
    for(int i = 0; i < nums.size(); i++) {
        
        if(temp.empty() || nums[i] > temp.back()) {
            temp.push_back(nums[i]);
        }
        
        else {
            int index = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
            temp[index] = nums[i];
        }
    }
    
    return temp.size();
}

int main() {
    
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    vector<int> nums(n);
    
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int ans = lengthOfLIS(nums);
    
    cout << "Length of LIS: " << ans << endl;
    
    return 0;
}