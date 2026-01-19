#include<iostream>
using namespace std;
  void fib(int n, int a, int b){
   if(n==0) return;

   int c = a+b;

   cout << c << " ";

   fib(n-1,b,c);

  }

int main(){
    int n =6 ;
    
    int a=0;
    int b=1;
    cout << a << " " << b << " ";
    fib(n-2,a,b) ;
      
    return 0;
}   