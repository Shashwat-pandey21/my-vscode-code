#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[5] = {3,1,2,5,4};
    int mini = INT_MAX; 
    int smin = INT_MAX;

    for(int i = 0; i < 5; i++) {
        if(arr[i] < mini) {
            smin = mini;    // old minimum becomes second minimum
            mini = arr[i];  // update new minimum
        }
        else if(arr[i] > mini && arr[i] < smin) {
            smin = arr[i];  // update second minimum if valid
        }
    }

    cout << "Second Minimum element = " << smin;
    return 0;
}
