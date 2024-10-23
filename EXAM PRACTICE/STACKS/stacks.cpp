#include <iostream>
#include <stack>
#include <list>
using namespace std;

// class Node{
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

class Stack{
    list<int> l;
public:
    void push(int val){
        l.push_front(val);
    }

    void pop(){
        if (l.empty()){
            return;
        }
        l.pop_front();
    }

    int top(){
        return l.front();
    }

    bool isEmpty(){
        return l.empty();
    }
};

int main(){
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }
}