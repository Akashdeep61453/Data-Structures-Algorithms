#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int num){
        val = num;
        left = right = NULL;
    }
};

    void preorder(Node* root){
        if(root==NULL)return;
    cout<<root->val<<" ";
        preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val<< " ";
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(7);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(16);
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}