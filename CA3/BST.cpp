#include <iostream>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;
public:
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val){
    if (root == NULL){
        return;
    }

    if (root->data < val){
        root->right = insert(root->right, val);
    }else{
        root->left = insert(root->left, val);
    }
    return root;
}

int static idx = 0;

Node* buildBST(int arr[], int n){
    Node* root = NULL;

    for (int i=0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}

