#include <iostream>
using namespace std;

class Queue{
    int* arr;
    int capacity;
    int currSize;
    int f,r;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = -1;
        r = -1;
    }

    void push(int data){
        if (currSize == capacity){
            cout << "Queue is full" << endl;
            return;
        }
        if (f == -1 && r == -1){
            f = 0;
            r = 0;
            arr[r] = data;
            currSize++;
            return;
        }
        r = (r+1)%capacity;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if (empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        f = (f+1)%capacity;
        currSize--;
    }

    int front(){
        return this->arr[f];
    }

    bool empty(){
        return currSize == 0;
    }
};

int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }
    return 0;
}