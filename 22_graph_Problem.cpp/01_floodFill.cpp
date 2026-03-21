#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int currRow, int currCol, int initialColor, int newColor) {

        int m = image.size(), n = image[0].size();

        if (currRow < 0 || currCol < 0 || currRow >= m || currCol >= n)  return;
           
        if (image[currRow][currCol] != initialColor)return;

        else image[currRow][currCol] = newColor;
        
        dfs(image, currRow + 1, currCol, initialColor, newColor);
        dfs(image, currRow - 1, currCol, initialColor, newColor);
        dfs(image, currRow, currCol + 1, initialColor, newColor);
        dfs(image, currRow, currCol - 1, initialColor, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        int initialColor = image[sr][sc];

        if (initialColor == newColor)
            return image;

        dfs(image, sr, sc, initialColor, newColor);

        return image;
    }
};