#include<bits/stdc++.h>
using namespace std;

// ================= NODE CLASS =================
class Node{
public:

    int data;      // Value store karega
    Node* next;    // Next node ka address store karega

    // Default Constructor
    // Agar koi value pass nahi hui to
    // data = 0 aur next = NULL set hoga
    Node(){
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized Constructor
    // Jab hum value pass karte hain (jaise new Node(10))
    // to data us value se initialize hoga
    // aur next by default NULL rahega
    Node(int data){
        this->data = data;   // Member variable set
        this->next = NULL;   // Abhi kisi se linked nahi
    }
};

// ================= PRINT FUNCTION =================
// Ye function linked list ko print karta hai
// Hum head ko direct move nahi karte
// Isliye ek temp pointer banate hain
void print(Node* &head){

    Node* temp = head;   // Temp pointer head se start karega

    // Jab tak temp NULL nahi hota
    while(temp != NULL){
        cout << temp->data << " ";  // Current node ka data print
        temp = temp->next;          // Next node pe move karo
    }
}

int main(){

    // Ye head node bana hai but yaha use nahi ho raha
    // (Conceptually head starting point hota hai)
    Node* head = new Node;

    // 5 alag-alag Node objects ban rahe hain
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    // ================= LINKING PROCESS =================
    // Har node ka next pointer agle node ka address store karega

    first->next = second;   // 10 -> 20
    second->next = third;   // 20 -> 30
    third->next = fourth;   // 30 -> 40
    fourth->next = fifth;   // 40 -> 50
    fifth->next = NULL;     // Last node ka next NULL hota hai

    cout << "Print all Linkedlist : ";

    // Yaha hum first ko head treat kar rahe hain
    // Kyunki first hi starting node hai
    print(first);

}