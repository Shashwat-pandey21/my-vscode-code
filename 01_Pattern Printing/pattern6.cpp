#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    for (int row= 0;row<n ;row++){
        for(int col = 0 ; col < row + n; col++){
            cout<< col+1;
        }
        cout<< endl;
    }
    return 0;
}