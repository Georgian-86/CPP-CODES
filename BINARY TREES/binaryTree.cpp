#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if (nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}

void preorder(Node* root){
    if (root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if (root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if (root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node* root){
    if (root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " "; 
        if (curr->left != NULL){
            q.push(curr->left);
        }
        if (curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout << endl;
}

int height(Node* root){
    if (root == NULL){
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);
    int currht = max(leftht, rightht)+1;
    return currht;
}

int count(Node* root){
    if (root == NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount+rightCount+1;
}

int nodeSum(Node* root){
    if (root == NULL){
        return 0;
    }

    int leftSum = nodeSum(root->left);
    int rightSum = nodeSum(root->right);
    return leftSum+rightSum+root->data;
}

int main(){
    vector <int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout << root->data << endl;
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << height(root);
    cout << endl;
    cout << "No of nodes: " << count(root) << endl;
    cout << "sum of nodes: " << nodeSum(root) << endl;
}

// // You are using GCC
// #include <iostream>
// #include <list>
// using namespace std;

// class Queue{
//     list<int> l;
//     int front;
//     int back;
// public:
//     Queue(){
//         front = -1;
//         back = -1;
//     }
    
//     void enqueue(int val){
//         if (front = -1){
//             front = back = val;
//             return;
//         }
//         l.push_back(val);
//         cout << "Customer ID " << val << "is enqueued" << endl;
//     }
    
//     void dequeue(){
//         if (l.empty()){
//             return;
//         }
//         int curr = l.front();
//         l.pop_front();
//         cout << "Dequeued customer ID: " << curr << endl;
//     }
    
//     void display(){
//         cout << "Customer IDs in the queue are: ";
//         while (l.empty()){
//             cout << l.front() << " ";
//             l.pop_front();
//         }
//         cout << endl;
//     }
    
// };

// int main(){
//     Queue q;
//     while (true){
//         int n;
//         cin >> n;
//         switch(n){
//             case 1:
//                 int val;
//                 cin >> val;
//                 q.enqueue(val);
//                 break;
            
//             case 2: 
//                 q.dequeue();
//                 break;
            
//             case 3:
//                 q.display();
//                 break;
                
//             case 4:
//                 return 0;
                
//             default:
//                 cout << "Invalid option";
//         }
//     }
// }












