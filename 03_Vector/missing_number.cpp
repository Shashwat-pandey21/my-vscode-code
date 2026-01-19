class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();  // Array me 0 to n numbers → size = n
        
        // Step 1: Sum approach (simple and safe)
        int total_sum = n * (n + 1) / 2;  // Sum of 0 to n
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum = sum + arr[i];  // Sum of elements in array
        }
        
        return total_sum - sum;  // Missing number = total - sum
    }
};
