#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
public:
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
public:
    List(){
        head = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
        }
        else {
            newNode-> next = head;
            head = newNode;
        }
    }

    void pushback(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
        }else{
            Node* temp = head;
            while (temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAtPos(int val, int pos){
        Node* newNode = new Node(val);
        Node* prev = head;

        for (int i=0; i<pos-1; i++){
            prev = prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }

    void display(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    ll.pushback(7);
    ll.pushback(8);
    ll.display();
    ll.insertAtPos(6,3);
    ll.display();
}