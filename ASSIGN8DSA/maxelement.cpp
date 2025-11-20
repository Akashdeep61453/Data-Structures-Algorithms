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

 
void maxelement(Node * root){
    Node * temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    cout<<"The max node in BST is "<<temp->val<<endl;
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

    maxelement(a);
    return 0;
}