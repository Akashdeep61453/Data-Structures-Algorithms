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

 int findmaximum(Node* root) {
    while (root->right!= NULL) {
        root = root->right;
    }
    return root->val;
}

void inorderpredecessor(Node* node, Node*root) {

    if (node->left!= NULL){
        cout << "The predecessor is"<<findmaximum(node->left);
        return;
    }

    int predecessor = 0;
    Node* temp = root;

    while(temp!= NULL){

        if(temp->val< node->val){
            predecessor = temp->val;
            temp = temp->right;
        }
        else if(temp->val > node->val){
            temp = temp->left;
        }
        else{
            break;
        }
    }

    if(predecessor==0) {
        cout<< "Predecessor does not exist";
        return;
    }

    cout<<"The predecessor is "<<predecessor<<endl;
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

    inorderpredecessor(g,a);
    return 0;
}