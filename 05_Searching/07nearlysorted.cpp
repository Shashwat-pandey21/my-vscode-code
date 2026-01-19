#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int target) {
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        

        // Check mid and its neighbors 
        if (arr[mid] == target) {
            return mid;
        }
        if (mid-1 >= s && arr[mid - 1] == target) { 
            return mid - 1;
        }
        if (mid + 1 <= e && arr[mid + 1] == target) {
            return mid + 1;
        }

        // Adjust search range based on the target location
        if (arr[mid] < target) {
            s = mid + 2; // move to the right
        }
          else {
            e = mid - 2; // move to the left
        }
    }
    return -1;
}

int main() {
    vector<int> arr {10, 30, 40, 20, 50, 80, 70};
    int target = 50;

    int ans = binarySearch(arr, target);

    if (ans == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Index of " << target << " is " << ans << endl;
    }

    return 0;
}




