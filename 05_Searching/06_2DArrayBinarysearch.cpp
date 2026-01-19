#include <iostream>
#include <vector>
using namespace std;

int IndexOfTarget(const vector<int>& arr, int target, int row, int column) {
    int total_size = row * column; //n=row , m= column
    int s = 0;
    int e = total_size - 1;
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;

        int row_index = mid / row;
        int col_index = mid % column;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            // search right
            s = mid + 1;
        } else {
            // search left
            e = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int target = 10;
    int row = 4; // Number of rows
    int column = 4; // Number of columns

    int findIndex = IndexOfTarget(arr, target, row, column);

    if (findIndex != -1) {
        cout << "Index of target is: " << findIndex << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
