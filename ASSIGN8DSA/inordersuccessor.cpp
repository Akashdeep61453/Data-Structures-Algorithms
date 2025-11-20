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

 int findminimum(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root->val;
 }

void inordersuccessor(Node* node,Node* root){
if(node->right !=NULL){
    cout<<"the successor is "<<findminimum(node->right);
    return;
}
int successor=0;
Node * temp = root;
while(temp!= NULL){
    if(temp->val > node->val){
        successor = temp->val;
        temp = temp->left;
    }
    else if(temp->val < node->val){
        temp = temp->right;
    }
    else{
        break;
    }
}
if(successor==0){
    cout<<"successor does not exist";
    return;
}
cout<<"The  successor is"<<successor<<endl;
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

    inordersuccessor(g,a);
    return 0;
}