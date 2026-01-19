#include<iostream>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of the target
int firstOccurence(vector<int> arr, int target) {
    int s = 0, e = arr.size() - 1;
    int ans = -1;   // Initialize to -1 to indicate not found

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;  // Store the index
            e = mid - 1;  // Search in the left half
        } else if (target > arr[mid]) {
            s = mid + 1;  // Search in the right half
        } else {
            e = mid - 1;  // Search in the left half
        }
    }
    return ans;
}

// Function to find the last occurrence of the target
int lastOccurence(vector<int> arr, int target) {
    int s = 0, e = arr.size() - 1;
    int ans = -1;   // Initialize to -1 to indicate not found

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            ans = mid;  // Store the index
            s = mid + 1;  // Search in the right half
        } else if (target > arr[mid]) {
            s = mid + 1;  // Search in the right half
        } else {
            e = mid - 1;  // Search in the left half
        }
    }
    return ans;
}

// Function to calculate total occurrences of the target
int totalOccurrences(vector<int> arr, int target) {
    int first = firstOccurence(arr, target);
    int last = lastOccurence(arr, target);

    if (first == -1 || last == -1) {
        // If the target is not found
        return 0;
    }

    // Total occurrences
    return last - first + 1;
}

int main() {
    vector<int> arr{1, 3, 4, 4, 4, 4, 4, 4, 4, 5, 6};
    int target = 4;

    int total = totalOccurrences(arr, target);

    cout << "Total occurrences of " << target << " is: " << total << endl;

    return 0;
}
