#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lastOccurence(vector<int>arr,int target){

    int s = 0;
    int e = arr.size()-1;

    int mid = s+(e-s)/2;
    int ans = 0; 

     while ( s<=e){

        if (arr[mid]==target){

            //store mid value in variable ans and search in right
            ans = mid;
            s = mid + 1;

        }

        else if (target > arr[mid]){

            //search in right
            s = mid + 1;
        }

        else{
            //search in left

            e = mid -1; 

        }

        mid = s+(e-s)/2;

     }

     return ans;

}

int main(){

    vector<int>arr{1,3,4,4,4,4,4,4,4,4,4,4,4,4,5,6};

    int target = 5;

    int indexOfLastOcc = lastOccurence(arr,target);

    cout << "Last occurence at index :" << indexOfLastOcc << endl;


    // by using function for short solution
    auto ans2 = lower_bound(arr.begin(),arr.end(),target);
    cout << "Last occurence at index :" << ans2-arr.begin()<< endl;

}


    