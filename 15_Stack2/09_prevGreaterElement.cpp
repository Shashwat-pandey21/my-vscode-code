#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    int n = v.size();

    stack<int> st;
    st.push(-1);

    vector<int> ans(n);

    for(int i = 0; i<n; i++) {

        int curr = v[i];   

      
        while(st.top() != -1 && st.top() <= curr) {
            st.pop();
        }

      
        ans[i] = st.top();

    
        st.push(curr);
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}