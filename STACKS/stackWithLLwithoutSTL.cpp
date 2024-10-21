#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* next;
public:
    Node(T x){
        next = NULL;
        data = x;
    }
};

template <class T>
class Stack{
    Node<T>* head;
public: 
    Stack(){
        head = NULL;
    }
    void push(T x){
        Node<T>* newNode = new Node<T>(x);
        if (head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

template <class T>
void pushAtBottom(Stack<T> &s, T x){
    if (s.isEmpty()){
        s.push(x);
        return;
    }
    T temp = s.top();
    s.pop();

    pushAtBottom(s,x);
    s.push(temp);


}

string reverseString(string x){
    string ans;
    Stack<char> s;
    for (int i = 0; i < x.length(); i++){
        s.push(x[i]);
    }
    while (!s.isEmpty()){
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main(){
    Stack<int> s1;
    s1.push(5);
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    pushAtBottom(s1, 7);
    while(!s1.isEmpty()){
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << reverseString("Golu");
}





