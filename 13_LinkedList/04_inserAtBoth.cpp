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

// ================= INSERT AT HEAD =================
void insertAtHead(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    // Agar list empty hai
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    // Normal case
    newNode->next = head;
    head = newNode;
}

// ================= INSERT AT TAIL =================
void insertAtTail(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    // Agar list empty hai
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// ================= PRINT FUNCTION =================
void print(Node* head){

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// ================= Main FUNCTION =================
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    // Tail insertions
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);

    // Head insertions
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 1);

    print(head);

    return 0;
}