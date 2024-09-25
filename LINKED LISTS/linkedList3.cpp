// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data ;
//         Node* next;
//     public:
//         Node(int val){
//             data = val;
//             next = NULL;
//         }

//         ~Node(){
//             if (next!=NULL){
//                 delete next;
//                 next = NULL;
//             }
//         }
// };

// class List{
//     Node* head;
//     public:
//         List(){
//             head = NULL;
//         }

//         ~List(){
//             if (head != NULL){
//                 delete head;
//                 head = NULL;
//             }
//         }

//         void push_front(int val){
//             Node* newNode = new Node(val);
//             if (head == NULL){
//                 head = newNode;
//             }
//             else {
//             newNode->next = head;
//             head = newNode;
//             }
//         }

//         void insertAtPos(int val, int n){
//             Node* newNode = new Node(val);
//             Node* temp = head;

//             if (n==1){
//                 head = newNode;
//             }
//             for (int i=1; i<n-1; i++){
//                 if (temp->next == NULL){
//                     cout << "Position out of range" << endl;
//                 }
//                 temp = temp->next;
//             }

//             newNode->next = temp->next;
//             temp->next = newNode;
//         }

//         void pop_front(){
//             Node* temp = head;
//             if (head == NULL){
//                 cout << "List is empty" << endl;
//                 return;
//             }
//             else{
//                 head = head->next;
//             }
//             temp->next = NULL;
//             delete temp;
//         }

//         void pop_back(){
//             Node* temp = head;
//             if (head == NULL){
//                 cout << "List is empty" << endl;
//                 return;
//             }

//             while (temp->next->next != NULL){
//                 temp = temp->next;
//             }
//         }


//         void display(){
//             Node* temp = head;
//             while (temp!=NULL){
//                 cout << temp->data << " ";
//                 temp = temp->next;

//             }
            
//         }

// };

// int main(){
//     List l;
//     l.push_front(5);
//     l.push_front(10);
//     l.push_front(15);
//     l.insertAtPos(20, 1);
//     l.display();
//     cout << endl;
//     int n;
//     cin >> n;
//     for (int i=0; i<n; i++){
//         int val;
//         cin >> val;
//         l.push_front(val);
//         cout << "updated list: " ;
//         l.display(); cout << endl;;
//     }
//     l.pop_front();
//     l.display();
// }


#include <iostream>
using namespace std;

void modify(int& a, int &b){
    a = (a*a)/2+4*b;
    b=  (b*b)/2+3*a;
}

int main(){
    int a = 12, b=8;
    modify(a,b);
    cout << a << " " << b;
}