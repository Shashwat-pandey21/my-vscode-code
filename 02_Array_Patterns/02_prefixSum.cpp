#include <bits/stdc++.h>
using namespace std;

// build prefix array
vector<int> buildPrefix(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}

// range sum query
int rangeSum(vector<int>& prefix, int l, int r) {
    if (l == 0) return prefix[r];
    return prefix[r] - prefix[l - 1];
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // build prefix sum
    vector<int> prefix = buildPrefix(arr);

    // print prefix array
    cout << "Prefix array: ";
    for (int x : prefix) {
        cout << x << " ";
    }
    cout << endl;

    // queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int l, r;
        cout << "Enter l and r: ";
        cin >> l >> r;

        cout << "Sum = " << rangeSum(prefix, l, r) << endl;
    }

    return 0;
}