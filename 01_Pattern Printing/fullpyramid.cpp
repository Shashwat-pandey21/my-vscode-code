#include <iostream>
using namespace std;
int main (){
    int row, col,n;
    cin >> n;
    for(row=0;row<n;row++){
        for(col=0;col<(n-row-1);col++){  //space
            cout<<(" ");
            
            }
        for(col=0;col<(row+1);col++){    //star
                cout<<("* ");        
        
        }
    cout<<endl;

    }
    return 0;

}
  