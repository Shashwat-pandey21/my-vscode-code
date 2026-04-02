#include<bits/stdc++.h>
using namespace std;

int color[101][101];

int helper(int i, int j, int arr[]) {

    if(i >= j) return 0;

    int result = INT_MAX;

    for(int k = i; k < j; k++) {

        int left = helper(i, k, arr);
        int right = helper(k+1, j, arr);

        int smoke = left + right + color[i][j];
                    
        result = min(result, smoke);
    }

    return result;
}

int main() {

    int n;

    while(cin >> n) {

        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

       
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += arr[j];
                color[i][j] = sum % 100;
            }
        }

        cout << helper(0, n-1, arr) << endl;
    }
}
