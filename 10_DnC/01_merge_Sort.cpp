#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    // merge two sorted halves
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    // remaining left part
    while (i <= mid)
        temp.push_back(arr[i++]);

    // remaining right part
    while (j <= end)
        temp.push_back(arr[j++]);

    // copy temp back to arr[st...end]
    for(int idx=0; idx< temp.size();idx++ ){
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st >= end) return;

    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid);      // left
    mergeSort(arr, mid + 1, end); // right

    merge(arr, st, mid, end);     // merge
}

int main()
{
    vector<int> arr = {23, 46, 3, 64, 34, 67};

    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
