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

int cnt =0;
int finddepth(Node* root){
    if(root==NULL)return 0;
    int lh =finddepth(root->left);
    int rh = finddepth(root->right);

    return 1 + max(lh,rh);
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

    cout<<"The max depth of BST is"<<finddepth(a);
    return 0;
}