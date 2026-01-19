#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[5] = {3,1};
    int maxi = INT_MIN; 
    int slarg = INT_MIN;

    for(int i = 0; i < 1; i++) {
        if(arr[i] > maxi) {
            slarg = maxi;    // old max becomes second largest
            maxi = arr[i];   // update new max
        }
        else if(arr[i] > slarg && arr[i] < maxi) {
            slarg = arr[i];  // update slarg only if it's smaller than maxi but bigger than old slarg
        }
    }

    cout << "Second Maximum element = " << slarg;
    return 0;
}
