#include<iostream>
using namespace std;
  int fun(int x , int n){
    if(x == 0) return 0;
    if(n == 0 ) return 1;

    if(n%2 == 0){                             // even power
        return fun(x,n/2) * fun(x,n/2);
    }

    else{                                      // odd power
        return x * fun(x,n/2) * fun(x,n/2);
    }

  }

int main(){
    int n = 5 ;
    int x = 2 ;
   
     cout << fun (2,5) << endl;
    
    return 0;
}