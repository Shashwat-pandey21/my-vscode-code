#include<iostream>
using namespace std;
int climbStairs(int n){
    // Base Case
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    // Recursive Relation
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}
int main(){
    int n = 5;
    int ways = climbStairs(n);
    cout<<"Total ways to reach the "<<n<<" stair is "<<ways<<endl;
    return 0;
}