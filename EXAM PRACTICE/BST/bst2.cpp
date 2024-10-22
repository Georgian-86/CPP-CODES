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

    if (root->data > val){
        root->left = insert(root->left, val);
    } else{
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
    cout << root->data << " "; 
    inorder(root->right);
}

bool search(Node* root, int val){
    if (root == NULL){
        return false;
    }
    if (root->data == val){
        return true;
    }
    if (root->data > val){
        return search(root->left,val);
    }else{
        return search(root->right, val);
    }
}

Node* getInorderSuccessor(Node* root){
    while (root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root, int val){
    if (root == NULL){
        return NULL;
    }

    if (root->data > val){
        root->left = delNode(root->left, val);
    } 
    else if(root->data < val){
        root->right = delNode(root->right, val);
    } else{
        if (root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if (root->left == NULL || root->right == NULL){
            return root->left == NULL? root->right : root->left;
        }
        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data);
        return root;
    }
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    int n =6;
    Node* root = buildBST(arr, n);
    inorder(root);
    cout << endl;
    cout << search(root,5);
}