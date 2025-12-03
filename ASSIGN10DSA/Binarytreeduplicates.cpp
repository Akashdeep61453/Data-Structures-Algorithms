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

bool check(Node* root, int hash[]) {
    if (root == NULL) return false;
    if (hash[root->val] == 1) 
        return true;

    hash[root->val] = 1;

    return check(root->left, hash) || check(root->right, hash);
}
bool hasDuplicate(Node* root) {
    int hash[10000] = {0}; 
    return check(root, hash);
}

int main(){
     Node*a = new Node(10);
    Node* b= new Node(11);
    Node* c= new Node(12);
     a->left = b;
    a->right = c;

    Node* d= new Node(7);
    Node* e= new Node(8);
    b->left = d;
    b->right = e;
    Node* f= new Node(11);
    Node* g= new Node(16);
   c->left = f;
    c->right = g;

    if(hasDuplicate(a)){
        cout<<"duplicates present";
    }
    else{
        cout<<"duplicates not present";
    }
    return 0;
}