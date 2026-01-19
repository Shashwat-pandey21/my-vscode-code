#include<iostream>
using namespace std;

 void printSubsequenceofString(string str, string output,int n , int i){
    //base case
    if(i>=n){
        cout << output << endl;
        return;
    }

    //exclude
    printSubsequenceofString(str,output,n,i+1);

    //include
    output.push_back(str[i]);
    printSubsequenceofString(str,output,n,i+1);
 }

 
int main (){
    string str = "abc";
    string output ="";
    int n = str.size();
    int i =0 ;

    printSubsequenceofString(str,output,n,i);
}