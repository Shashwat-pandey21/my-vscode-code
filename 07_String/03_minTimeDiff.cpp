#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        // Step 1: Convert "HH:MM" strings to total minutes
        for (int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0, 2));  // Extract hours
            int mins = stoi(curr.substr(3, 2));   // Extract minutes
            int totalMinutes = hours * 60 + mins;
            minutes.push_back(totalMinutes);
        }

        // Step 2: Sort the minutes
        sort(minutes.begin(), minutes.end());

        // Step 3: Find minimum difference between adjacent times 
        
        
        int mini = INT_MAX;                                           
         //First: mini = min(INT_MAX, 5) → mini = 5
         //Next: mini = min(5, 20) → still 5
         //Next: mini = min(5, 10) → still 5


        int n = minutes.size();
        for (int i = 0; i < n - 1; i++) {
            int diff = minutes[i + 1] - minutes[i];
            mini = min(mini, diff);
        }

        // Step 4: Handle wrap-around from last to first time
        int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
        mini = min(mini, lastDiff);

        return mini;
    }
};

int main() {
    vector<string> timePoints = {"23:59", "00:00", "12:30"};

    Solution sol;
    int result = sol.findMinDifference(timePoints);

    cout << "Minimum time difference: " << result << " minutes" << endl;

    return 0;
}
