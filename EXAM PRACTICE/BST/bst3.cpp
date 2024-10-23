#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val){
    if (root == NULL){
        root = new Node(val);
        return root;
    }
    if (val < root->data){
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;
    for (int i=0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}

void inorder(Node* root){
    if (root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    int n =6;
    Node* root = buildBST(arr, n);
    inorder(root);
    cout << endl;
}