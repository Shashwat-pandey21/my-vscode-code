#include<iostream>
using namespace std;

int findSqrt(int n){

    int s = 0;
    int e = n;

    int mid = s +(e-s)/2;

    int target = n;

    int ans = 0100;
     

    while (s<=e){ 

        if(mid*mid == target){
            return mid;
        }

        else if (mid*mid>target){

            //move left 
            e = mid - 1;
        }

        else//(mid*mid<target) 
        
        {
            //store ans
            ans = mid;
            //move right
            s = mid + 1;


        }

        mid = s+(e-s)/2;

    
        
    }

    return ans;
    
}

int main(){

    int n;
    cout << "Enter the number :" << " ";
    cin >> n ;

    int ans = findSqrt(n);

    cout << "Squareroot of this number is : " << ans << endl;
}