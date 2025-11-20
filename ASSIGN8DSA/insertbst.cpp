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


 Node* insert(Node* root, int key){

    Node* node = new Node(key);

    if (root ==NULL){
        return node;   
    }

    Node* temp = root;
    Node* parent = NULL;

    while (temp != NULL){
        parent = temp;

        if (key < temp->val){
            temp = temp->left;
        }
        else if(key>temp->val){
            temp = temp->right;
        }
        else{
            cout << "Duplicate doesn't allowed";
            return root;   
    }
    }
    if(key < parent->val){
        parent->left = node;
    }
    else{
        parent->right = node;
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

    insert(a,18);
    inorder(a);
    return 0;
}