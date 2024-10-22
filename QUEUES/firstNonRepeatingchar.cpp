#include <iostream>
using namespace std;

class Queue{
    int* arr;
    int front;
    int back;
    int capacity;
public: 
    Queue(int s){
        arr = new int[s];
        front = -1;
        back = -1;
        capacity = s;
    }

    void push(int val){
        if (back == -1 && front == -1){
            arr[0] = val;
            back =0;
            front = 0;
        }
        if (back == capacity-1){
            front = -1;
            back = -1;
            cout << "Array is full" << endl;
            return;
        }
        if (back == 0){
            front = 0;
        }
        back++;
        arr[back]=val;
    }

    void pop(){
        if (front == -1 && back == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
        if (front > back){
            front = -1;
            back = -1;
        }
    }

    int getFront(){
        if (front == -1 && back == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return front == -1;
    }
};

int  main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << q.getFront() << endl;
    while (!q.isEmpty()){
        cout << q.getFront() << endl;
        q.pop();
    }
}