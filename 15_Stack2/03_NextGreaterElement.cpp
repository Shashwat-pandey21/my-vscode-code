#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {4,5,2,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> nge(n);

    stack<int> st;

    // last element ka NGE hamesha -1 hota hai
    nge[n-1] = -1;

    st.push(arr[n-1]);

   
    for(int i=n-2;i>=0;i--){

        // chote elements pop karo
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }

        // answer store karo
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();

        // current element push karo
        st.push(arr[i]);
    }

  
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    cout<<endl;

}