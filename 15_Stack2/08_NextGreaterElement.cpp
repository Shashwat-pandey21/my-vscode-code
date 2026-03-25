#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    int n = v.size();

    stack<int> st;
    st.push(-1);

    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--) {

        int curr = v[i];   

        // jo element curr se chhota ya equal hai,
        // wo next greater nahi ho sakta
        while(st.top() != -1 && st.top() <= curr) {
            st.pop();
        }

        // ab stack ka top next greater element hai
        ans[i] = st.top();

        // current element ko stack me push kar do
        st.push(curr);
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}