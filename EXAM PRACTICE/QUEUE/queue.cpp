#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Queue{
    list<int> l;
public: 
    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    bool isEmpty(){
        return l.empty();
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while (!q.isEmpty()){
        cout << q.front() << " ";
        q.pop();
    }
}