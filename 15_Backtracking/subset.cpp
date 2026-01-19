#include <iostream>
#include <vector>
using namespace std;

void subsets(int i, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans){

    if (i == nums.size()){
    
        ans.push_back(temp);
        return;
    }
    // take
    temp.push_back(nums[i]);
    subsets(i + 1, nums, temp, ans);

    // not take
    temp.pop_back();
    subsets(i + 1, nums, temp, ans);
}

int main(){

    vector<int> nums = {1, 2, 3};
    vector<int> temp;
    vector<vector<int>> ans;

    subsets(0, nums, temp, ans);

    for (int i = 0; i < ans.size(); i++){
    
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
