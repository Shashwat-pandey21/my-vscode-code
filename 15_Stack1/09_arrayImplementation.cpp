#include<bits/stdc++.h>
using namespace std;

class Stack{      //class
public:
    int arr[5];
    int idx;

    Stack(){        //counstructor
        idx = -1;
    }

    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0]) - 1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }

    int top(){
        return arr[idx];
    }

    int size(){
        return idx + 1;
    }

    void display(){
        for(int i=0; i<=idx; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    Stack st;    // object

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"Size: "<<st.size()<<endl;

    cout<<"Top Element : "<<st.top()<<endl;

    st.display();

    st.pop();   // remove top element
    cout<<"After pop:"<< " ";

    st.display();

}