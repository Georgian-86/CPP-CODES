#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> v;
    int front;
    int back;
public:
    Queue(){
        front = -1;
        back = -1;
    }

    void enqueue(int val){
        if (back == 0){
            front = 0;
        }
        this->back++;
        v.push_back(val);
        cout << "Enqueued: " << val << endl;

    }

    void dequeue(){
        if (front == -1){
            return;
        }
        cout << "Dequeued: " << v[front] << endl;
        if (this->front == this->back){
            front = -1;
            back = -1;
            v.clear();
        }
        else{
            this->front++;
        }
    }

    int getfront(){
        if (this->front == -1){
            return -1;
        }
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->front == -1 && this->back ==-1;
    }

    void printStatus(){
        cout << "Front: " << front << ", Back: " << back << ", Size: " << v.size() << endl;
        cout << "Contents: ";
        for (int i=front; i<=back && i<v.size(); i++){
            cout << v[i] << " "; 
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    while (!q.isEmpty()){
        cout << q.getfront() << " ";
        q.dequeue();
        q.printStatus();
    }
}