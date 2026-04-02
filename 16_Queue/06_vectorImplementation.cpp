#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    int front;
    int back;
    vector<int>arr;

    Queue() {
        front = 0;
        back = 0;
        arr.resize(5);
    }

    
    void push(int val) {
        if (back == arr.size()) {
            cout << "Queue Overflow";
            return;
        }
        arr[back] = val;
        back++;
    }

  
    void pop() {
        if (front == back) {
            cout << "Queue Underflow";
            return;
        }
        front++;
    }

   
    int getFront() {
        if (front == back) {
            cout << "Queue is Empty";
            return -1;
        }
        return arr[front];
    }

    
    int rear() {
        if (front == back) {
            cout << "Queue is Empty";
            return -1;
        }
        return arr[back - 1];
    }

   
    int size() {
        return back - front;
    }

   
    bool empty() {
        return (front == back);
    }

   
    void display() {
        if (front == back) {
            cout << "Queue is Empty";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i < back; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.display();

    
    q.push(6);

    
    q.pop();
    q.display();

   
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.rear() << endl;


    cout << "Size: " << q.size() << endl;

 
    if (q.empty()) {
        cout << "Queue is Empty";
    } else {
        cout << "Queue is NOT Empty";
    }

 
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    
    q.pop();

    return 0;
}