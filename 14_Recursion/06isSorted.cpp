#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& v, int i){

    if(i == v.size()-1) return true;

    if(v[i] > v[i+1]) return false;

    return isSorted(v,i+1);
}

int main() {
    vector<int>v ;

    v = {1, 2, 7,4};
    
    bool ans = isSorted(v,0);

    cout << ans << endl;
    
    return 0;
}
