
#include<bits/stdc++.h>
using namespace std;

void helper(int n , string &path){

    if (n==0){

        cout << path << endl;

        return;
    }
    path.push_back('1');
    helper(n-1,path);
    path.pop_back();

    if(n>=2){
    path.push_back('2');
    helper(n-2, path);
    path.pop_back();
    }
}

int main(){

int n=4;
string path = "";
helper(n,path);
    
}