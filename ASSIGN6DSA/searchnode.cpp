#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
Node* prev;

Node(){
    val =0;
    next=prev=NULL;
}
Node(int num){
    val = num;
    next = prev=NULL;
}
};
Node* head = NULL;

void insertatbeg(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertatend(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertafterpos(int val, int num){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp =head;
    while(temp !=NULL && temp->val != num){
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Node not exists";
    }
    else{
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;

    }
}
void printll(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void search(int num){
    Node* temp = head;
    while(temp != NULL && temp->val != num){
        temp=temp->next;
    }
    if(temp ==NULL){
        cout<<"node doesn't exits";
    return;
}
   else{
    cout<<"Node exists in the LL";
   }

}
int main(){
    insertatbeg(5);
 insertatend(6);
 insertatend(7);
 insertatend(8);

insertatbeg(4);
insertatend(15);
search(4);
// printll();
    return 0;
}