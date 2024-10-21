#include <iostream>
#include <list>
using namespace std;

template <class T>
class Node{
    T data;
    Node* next;
public:
    Node(T x){
        next = NULL;
        data = T;
    }
};

template <class T>
class Stack{
    list <T> l;
public: 
    void push(T x){
        l.push_back(x);
    }
    void pop(){
        l.pop_front();
    }
    T top(){
        return l.front();
    }
    bool isEmpty(){
        return l.size()==0;
    }
};

int main(){
    Stack <int> s1;
    s1.push(5);
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while(!s1.isEmpty()){
        cout << s1.top() << endl;
        s1.pop();
    }
    
}





