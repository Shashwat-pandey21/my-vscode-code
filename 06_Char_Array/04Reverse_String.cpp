#include <iostream>
#include <string.h>
#include<vector>
using namespace std;

void reverseString(char ch[]){
     //two pointer approach 

     int i=0;
     int n = strlen(ch);
     int j = n-1;

     while(i<=j){

        swap (ch[i],ch[j]);
        i++;
        j--;
        
     }

}

int main(){
    char ch[100];

    cout<<"Intial String : " ;
    cin >> ch;

    reverseString(ch);
    cout << "Reverse string :" << ch << endl;
    return 0;
}