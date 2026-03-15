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

    //empty linked list
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    //position -> head
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }

    //position -> tail
    int len = findLength(head);
 
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    

//position -> middle


// step 1: find previous node
int i = 0;
Node* prev = head;

while(i < position - 1){
    prev = prev->next;
    i++;
}

// step 2: find current node
Node* curr = prev->next;

// step 3: create node to insert
Node* newNode = new Node(data);

// step 4: adjust pointers
newNode->next = curr;

// step 5: link previous node to new node
prev->next = newNode;

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

    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    insertAtPosition(101,10,head, tail);

    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}  