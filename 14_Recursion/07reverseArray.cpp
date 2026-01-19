#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& v, int i, int j){

    if(i >= j) return;

    swap(v[i],v[j]);

    return reverseArray(v,i+1,j-1);

    
}
int main() {
    vector<int>v ;

    v = {1, 2, 7,4};
    
    reverseArray(v,0,v.size()-1);

    for(int i=0; i < v.size();i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
