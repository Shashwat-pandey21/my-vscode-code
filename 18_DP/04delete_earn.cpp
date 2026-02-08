#include <bits/stdc++.h>
using namespace std;

vector<long long> dp;

int helper(vector<long long>& freq, int i) {


    if (i >= freq.size()) return 0;

    if (dp[i] != -1) return dp[i];

    long long steal = freq[i] + helper(freq, i + 2);
    long long skip  = helper(freq, i + 1);

    return dp[i] = max(steal, skip);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (n == 0) {
        cout << "Maximum points = 0";
        return 0;
    }

   
    int maxVal = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > maxVal) {
            maxVal = nums[i];
        }
    }

   
    vector<long long> freq(maxVal + 1, 0);
    for (int i = 0; i < n; i++) {
        int x = nums[i];
        freq[x] = freq[x] + x;
    }

    
    dp.assign(freq.size(), -1);

    int ans = helper(freq, 0);

    cout << "Maximum points = " << ans << endl;

    return 0;
}
