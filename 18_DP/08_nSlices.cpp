#include<bits/stdc++.h>
using namespace std;

long long dp[401][401];
long long costArray[401][401];

long long helper(int i, int j, int arr[]){

    if(i>=j) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    long long  ans = LLONG_MAX;

    for(int k=i; k<j; k++){
        
        long long left = helper(i,k,arr);
        long long right = helper(k+1,j,arr);

        long long cost = left +  right + costArray[i][j];

        ans = min(ans,cost);
    }

    return dp[i][j] = ans;
}

int main(){

    int n ;

    cin >>n;

   int arr[n];

   for(int i=0; i<n; i++){
    cin >> arr[i];
   }


   for(int i=0;i<n;i++){

    long long sum = 0;

    for(int j=i;j<n;j++){

        sum += arr[j];

        costArray[i][j] = sum;
    }
   }

    memset(dp, -1, sizeof(dp));
    cout << helper(0,n-1,arr);
}