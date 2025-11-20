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

  void search(Node * node,Node* root){
    Node* temp = root;
    while(temp != NULL){
        if(temp->val==node->val){
            cout<<"node is found in BST"<<endl;
        break;
    }
        else if(temp->val>node->val){
            temp =temp->left;
        }
        else{
            temp= temp->right;
        }
    }
    if(temp == NULL){
        cout<<"Node not found";
    }
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

    search(d,a);
    return 0;
}