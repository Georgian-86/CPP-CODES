#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x){
        while (!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        s1.pop();
    }

    int front(){
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }

};


int main(){
    Queue q;
    q.push(3);
    q.push(2);
    q.push(1);
    cout << q.front() << endl;
    while (!q.empty()){
        cout << q.front() <<  " ";
        q.pop();
    }


    return 0;

}