// #include <iostream>
// using namespace std;

// class Node{
//     int data;
//     Node* next;
// public:
//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
//     void setNext(Node* nextNode){
//         next = nextNode;
//     }
// };

// class List{
//     Node* head;
//     Node* tail;
// public:
//     List(){
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if (head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->setNext(head);
//             head = newNode;
//         }
//     }
//     void printlist(){
//         Node* temp = head;
//         while (temp != NULL){
//             cout << temp->data << " ";
//         }
//     }
// };

// int main(){
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
// }

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
public:
    Node(int value) {
        data = value;
        next = NULL;
    }

    ~Node(){
        // Deleting individual nodes
        if (next != NULL){
            delete next;
            next = NULL;
        }
    }

    // void setnext(Node* nextNode){
    //     next = nextNode;
    // }
};

class List{
    Node* head;
    Node* tail;
public: 
    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){
        // Deleting the list
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        
        if (head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_list(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* prev = head;
        for (int i=0; i<pos-1; i++){
            prev = prev->next;
        }

        newNode->next = prev->next;
        prev->next = newNode;
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }

    int Iterative_search(int val){
        Node* temp = head;
        int idx = 0;
        while (temp != NULL){
            if (temp->data == val){
                return idx;
            }
            else{
                temp = temp->next;
            }
            idx++;
        }

        return -1;
        
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.print_list();
    ll.push_back(0);
    ll.push_back(-1);
    ll.push_back(-2);
    ll.print_list();
    ll.insert(4,2);
    ll.print_list();
    ll.pop_front();
    ll.print_list();
    ll.pop_back();
    ll.print_list();
    cout << ll.Iterative_search(0);
}