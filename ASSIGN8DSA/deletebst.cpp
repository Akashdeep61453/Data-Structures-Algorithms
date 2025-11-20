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

Node* findminimum(Node* root){
    while(root->left){
        root=root->left;
    }
    return root;
}
Node* deletenode(Node* root, int key){
if(root==NULL)return root;

if(key<root->val){
    root->left = deletenode(root->left,key);
}
else if(key>root->val){
    root->right = deletenode(root->right,key);
}
else{

    if(!root->left&& !root->right){
        delete root;
        return NULL;
    }
    else if(!root->left){
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if(!root->right){
        Node* temp = root->left;
        delete root;
        return temp;
    }
    else{
    Node* minimumm = findminimum(root->right);
    root->val = minimumm->val;
    root->right = deletenode(root->right,minimumm->val);
}
}
return root;
}
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main(){
     Node*a = new Node(10);
    Node* b= new Node(8);
    Node* c= new Node(12);
     a->left = b;
    a->right = c;

    Node* d= new Node(7);
    Node* e= new Node(9);
    b->left = d;
    b->right = e;
    Node* f= new Node(11);
    Node* g= new Node(16);
   c->left = f;
    c->right = g;

    inorder(a);
    deletenode(a,11);
    inorder(a);
    return 0;
}