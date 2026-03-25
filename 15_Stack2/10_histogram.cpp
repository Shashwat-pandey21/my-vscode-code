#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmallerElement(vector<int> &height) {
    stack<int> st;
    st.push(-1);

    vector<int> ans(height.size());

    for(int i = 0; i < height.size(); i++) {
        int curr = height[i];

        while(st.top() != -1 && height[st.top()] >= curr) {
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> nextSmaller(vector<int> &height) {
    stack<int> st;
    st.push(-1);

    vector<int> ans(height.size());

    for(int i = height.size() - 1; i >= 0; i--) {
        int curr = height[i];

        while(st.top() != -1 && height[st.top()] >= curr) {
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

int getRectangularAreaHistogram(vector<int> &height) {

    //step1: prevSmaller output
    vector<int> prev = prevSmallerElement(height);

    //step2: nextSmaller call
    vector<int> next = nextSmaller(height);

    int maxArea = INT_MIN;

    for(int i = 0; i < height.size(); i++) {


        int length = height[i];

        int width = next[i] - prev[i] - 1;

        int area = length * width;
        
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    vector<int> height = {2, 1, 5, 6, 2, 3};

    cout << getRectangularAreaHistogram(height) << endl;

    return 0;
}