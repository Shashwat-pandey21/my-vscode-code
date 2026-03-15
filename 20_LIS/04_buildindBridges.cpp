#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBridges(vector<pair<int,int>>& bridges) {
        
        // sort by north
        sort(bridges.begin(), bridges.end());
        
        int n = bridges.size();
        
        vector<int> dp(n, 1);
        
        int ans = 1;
        
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                
                // LIS on south
                if(bridges[i].second > bridges[j].second) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};

int main() {
    
    int n;
    cin >> n;

    vector<pair<int,int>> bridges(n);

    for(int i = 0; i < n; i++) {
        cin >> bridges[i].first >> bridges[i].second;
    }

    Solution obj;
    cout << obj.maxBridges(bridges);

    return 0;
}
