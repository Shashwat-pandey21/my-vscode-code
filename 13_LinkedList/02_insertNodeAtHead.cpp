#include<bits/stdc++.h>
using namespace std;

// ================= NODE CLASS =================
class Node{
public: 

    int data;     
    Node* next;    

    // Constructor with value
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// ================= INSERT AT HEAD =================
void insertAtHead(Node* &head, int data){

    // Step 1: New node create karo
    Node* newNode = new Node(data);

    // Step 2: New node ka next purane head ko point karega
    newNode->next = head;

    // Step 3: Head ko update karo
    head = newNode;
}

// ================= PRINT FUNCTION =================
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){

    // Initial head node
    Node* head = new Node(10);

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);

    print(head);
}