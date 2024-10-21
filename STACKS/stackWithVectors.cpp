#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{
    vector <T> vec;
public: 
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
            return;
        }
        vec.pop_back();
    }
    T top(){
        // if (isEmpty()){
        //     cout << "Stack is empty" << endl;
        //     return -1;
        // }
        int lastidx = vec.size()-1;
        return vec[lastidx];
    }
    bool isEmpty(){
        if (vec.size() == 0){
            return true;
        }
        return false;
    }
};

int main(){
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    while (!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // s.pop();
}