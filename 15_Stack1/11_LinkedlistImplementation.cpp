#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
       this -> data = val;
       this -> next = NULL;
    }
};

class Stack{
public:

    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top(){
        if(head == NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return head->data;
    }

    int getSize(){
        return size;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<"Top: "<<st.top()<<endl;
    cout<<"Size: "<<st.getSize()<<endl;

    st.display();

    st.pop();

    cout<<"Top after pop: "<<st.top()<<endl;
}