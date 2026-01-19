#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    while (nums[0] != nums[nums[0]]) {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0]; // duplicate found
}

int main() {
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << "Duplicate: " << findDuplicate(nums) << endl;
    return 0;
}



// 🔎 Dry Run (nums = [3,1,3,4,2])

// nums[0] = 3, nums[3] = 4 → swap → [4,1,3,3,2]

// nums[0] = 4, nums[4] = 2 → swap → [2,1,3,3,4]

// nums[0] = 2, nums[2] = 3 → swap → [3,1,2,3,4]

// nums[0] = 3, nums[3] = 3 → loop ends → return 3