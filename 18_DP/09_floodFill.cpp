#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
int dp[5001][5001];
int helper(int i, int j, vector<int>&arr){

    if(i>=j) return 0;

    if(dp[i][j] != -1)

    if(arr[i] == arr[j]){

        return dp[i][j] = helper(i+1,j-1,arr) +1;
    }

     return dp[i][j] = min(helper(i+1, j,arr), helper(i, j-1,arr)) + 1;
                         
}
int main(){

    int n;

    cin >> n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){

       cin >> arr[i];
    }

        ans.push_back(arr[0]);

        for(int i = 1; i < n; i++) {

        if(arr[i] != arr[i-1]){

            ans.push_back(arr[i]);

        }
    }


    cout << helper(0,n-1,arr);

}