#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Insert at tail
void insertAtTail(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    // Agar list empty hai
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    // Tail ke next me attach karo
    tail->next = newNode;

    // Tail ko aage shift karo
    tail = newNode;
}

// Print function
void print(Node* head){

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    print(head);
}