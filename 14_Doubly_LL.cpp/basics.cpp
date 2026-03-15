#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }   
};

//___________LENGTH____________

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

//___________________INSERTION_________________________

//____________atHead______________
void insertAtHead(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

//_______________atTail____________
void insertAtTail(Node* &head, Node* &tail, int data){

    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

//_____________atPosition____________

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    
    if(position <= 1){
        insertAtHead(head, tail, data);
        return;
    }

    int len = getLength(head);

    if(position > len){
        insertAtTail(head, tail, data);
        return;
    }

    Node* newNode = new Node(data);

    int i = 1;
    Node* prevNode = head;

    while(i < position - 1){
        prevNode = prevNode->next;
        i++;
    }

    Node* curr = prevNode->next;

    prevNode->next = newNode;
    newNode->prev = prevNode;

    newNode->next = curr;
    curr->prev = newNode;
}

//___________PRINT__________

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    
    Node* head = first;
    Node* tail = fourth;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    print(head);

    insertAtHead(head, tail, 50);
    print(head);

    insertAtTail(head, tail, 100);
    print(head);

    insertAtPosition(head, tail, 75, 3);
    print(head);

    return 0;
}