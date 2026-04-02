#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
        maxi = max(maxi, sum);

        if(sum<0) {
            sum = 0;
        }
    }

    return maxi;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = maxSubArray(arr);

    cout << "Maximum Subarray Sum = " << ans << endl;

    return 0;
}