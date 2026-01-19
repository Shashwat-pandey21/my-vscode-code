class Solution {
public:
    vector<int> wavePrint(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();          // number of rows
        int n = matrix[0].size();       // number of cols

        for (int col = 0; col < n; col++) {
            if (col % 2 == 0) {
                // even column → top to bottom
                for (int row = 0; row < m; row++) {
                    ans.push_back(matrix[row][col]);
                }
            } else {
                // odd column → bottom to top
                for (int row = m - 1; row >= 0; row--) {
                    ans.push_back(matrix[row][col]);
                }
            }
        }

        return ans;
    }
};
