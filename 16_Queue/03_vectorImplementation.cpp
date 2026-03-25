#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    vector<int> v;
    int front;
    int rear;
    int size;

    Queue(int n) {
        size = n;
        v.resize(n);
        front = 0;
        rear = 0;
    }

    void push(int data) {
        if (rear == size) {
            cout << "Queue is full" << endl;
            return;
        }

        v[rear] = data;
        rear++;
    }

    void pop() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;

        if (front == rear) {
            front = 0;
            rear = 0;
        }
    }

    int getFront() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return v[front];
    }

    bool empty() {
        return front == rear;
    }

    int getSize() {
        return rear - front;
    }
};

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.getFront() << endl;   
    q.pop();
    cout << q.getFront() << endl;   
    cout << q.getSize() << endl;    

    return 0;
}