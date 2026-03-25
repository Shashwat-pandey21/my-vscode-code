
//__________________Monotonic satck____________________

//_____________pattern in types ke question ka _________-

          //curr lo
         // useless elements pop karo
         // top se answer lo
         // curr ko push karo



#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    int n = v.size();

    stack<int>st;
    st.push(-1);


    vector<int>ans(n);

    for(int i =n-1; i>=0; i--){

        int curr = v[i];       


       //jo element curr se bada ya equal hai, wo next smaller nahi ho sakta
        while(st.top()>=v[i]){  
            st.pop();
        }

        //chota element mil gya -> store in ans
        ans[i] = st.top();

       // current element ko future ke liye stack me daal do
        st.push(curr);
    }


    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }

    cout <<endl;

    return 0;
}