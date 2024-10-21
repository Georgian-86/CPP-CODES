#include <iostream>
#include <vector>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
public: 
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);
        if (this->head == NULL){
            this->head = this->tail = newNode;
            return;
        }
        this->tail->next = newNode;
        this->tail = newNode;
        this->size++;
    }

    void dequeue(){
        if (this->head == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* oldHead = this->head;
        Node* newHead = this->head->next;
        this->head = newHead;
        if (this->head == NULL){
            this->tail = NULL;
        }
        oldHead = NULL;
        delete oldHead;
        this->size--;
    }

    int getFront(){
        return this->head->data;
    }

    int getSize(){
        return this->size;
    }

    bool  isEmpty(){
        return this->head == NULL;
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    cout << q.getFront() << endl;
    q.dequeue();
    cout << q.getSize() << endl;
    cout << q.getFront()<< endl;
    while (!q.isEmpty()){
        cout << q.getFront() << " ";
        q.dequeue();
    }

}