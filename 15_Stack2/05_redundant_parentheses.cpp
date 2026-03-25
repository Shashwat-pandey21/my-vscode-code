#include<bits/stdc++.h>
using namespace std;

bool checkRedundant(string s) {
    stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')') {
            bool operatorFound = false;


            while(st.top() != '(') {
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/') {
                    operatorFound = true;
                }
                st.pop();
            }
            

            st.pop(); // remove '('

            if(operatorFound == false) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string s = "((a+b))";

    if(checkRedundant(s)) {
        cout << "Redundant Brackets Present";
    }
    else {
        cout << "No Redundant Brackets";
    }

    return 0;
}