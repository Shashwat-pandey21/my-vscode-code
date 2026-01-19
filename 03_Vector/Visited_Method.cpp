#include <iostream>
#include <vector>
using namespace std;

    int missingNumber(vector<int>& arr) {
        for(int i=0;arr.size();i++){
            int value = abs(arr[i]);
            int index = value - 1;

            if(arr[i] > 0){
                arr[i] = -arr[i];
            }
            else{
                  cout << "Duplicate number is: " << value << endl;
            }
        }
    }
