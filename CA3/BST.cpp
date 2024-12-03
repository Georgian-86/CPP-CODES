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
        root = new Node(val);
        return root;
    }

    if (root->data < val){
        root->right = insert(root->right, val);
    }else{
        root->left = insert(root->left, val);
    }
    return root;
}

Node* buildBST(int arr[], int n){
    Node* root = NULL;

    for (int i=0; i<n; i++){
        root = insert(root, arr[i]);
    }
    return root;
}

void Inorder(Node* root){
    if (root == NULL){
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

bool search(Node* root,int key){
    if (root == NULL){
        return false;
    }

    if (root->data == key){
        return true;
    }

    if (root->data < key){
        return search(root->right, key);
    }
    return search(root->left, key);
}

Node* getInorder(Node* root){
    while (root->left != NULL){
        root = root->left ;
    }
    return root;
}

Node* delNode(Node* root, int val){
    if (root== NULL){
        return NULL;
    }

    if (val > root->data){
        root->right = delNode(root->right,val);
    }else if (val < root->data){
        root->left = delNode(root->left, val);
    }else{
        if (root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if (root->left == NULL || root->right == NULL){
            if (root->left == NULL){
                return root->right;
            }else{
                return root->left;
            }

            Node* IS = getInorder(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
            return root;
        }

    }
}

void printInRange(Node* root, int start, int end){
    if (root->data <= end && root->data >= start){
        cout << root->data << " ";
        printInRange(root->left, start, end);
        printInRange(root->right, start, end);
    }

    else if(root->data < start){
        printInRange(root->right, start, end);
    }
    else{
        printInRange(root->left, start, end);
    }
}

int main(){
    int arr[] = {5,1,3,4,2,7};
    Node* root = buildBST(arr,6);
    Inorder(root);
    cout << endl;
    cout << search(root, 5);
}