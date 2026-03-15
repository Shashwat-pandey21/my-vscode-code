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


// INSERT AT HEAD
void insertAtHead(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

// INSERT AT TAIL
void insertAtTail(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// FIND LENGTH
int findLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

// INSERT AT POSITION
void insertAtPosition(int data ,int position,Node* &head, Node* &tail ){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // position at head
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    // position at tail
    int len = findLength(head);
 
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    // insert at middle position

    int i = 0;
    Node* prev = head;

    while(i < position - 1){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    Node* newNode = new Node(data);

    newNode->next = curr;
    prev->next = newNode;
}


// DELETE AT HEAD
void deleteAtHead(Node* &head, Node* &tail){

    if(head == NULL){
        cout << "List is empty\n";
        return;
    }

    // Only one node
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// PRINT
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// MAIN
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);

    insertAtTail(head, tail, 77);

    cout << "Initial List:\n";
    print(head);

    deleteAtHead(head, tail);

    cout << "After Deleting Head:\n";
    print(head);

    return 0;
}