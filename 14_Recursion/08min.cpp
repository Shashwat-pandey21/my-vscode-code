#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void minElement(vector<int>& v, int i, int size, int &min){

    if(i==size) return; 

    if(v[i]<size){
        min = v[i];
    }

    return minElement(v,i+1,size,min);

}
int main() {
    vector<int>v ;

    v = {1, 2, 7,4};

    int size = 4;

    int i = 0;

    int min = INT_MAX;
    
    minElement(v,i,size,min);

    cout << min;

    return 0;
}
