#include <iostream>
using namespace std ;
int main(){
    int row,col,rowCount,coloumnCount;
    cin >> rowCount; // number of rows
    cin >> coloumnCount;  // number of coloummns
 for (row= 0;row < rowCount;row=row+1){
    if(row == 0 || row == rowCount-1){            //first row and last row -> print rowcount(input n)
        for(col = 0; col < coloumnCount; col++){
            cout<< "* ";
            
        }
    }
   else{ 

    cout<<"*"; //first star
    for ( col=0;col < coloumnCount-2;col++){   //space
        
        cout<<" "; // space
    }
    cout << "*  "; //last star
   }
   cout <<endl;
 }
 return 0;
}