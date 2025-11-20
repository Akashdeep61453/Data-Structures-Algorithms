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
    next = prev= NULL;
}
};
Node* head = NULL;

void insertatbeg(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
        return;
    }
    newNode->next = head;
    newNode->prev = head->prev;
    head->prev->next = newNode;
    head->prev = newNode;
    head = newNode;
    
}

void insertatend(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        newNode->prev=head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = head;
    head->prev = newNode;
}

void printsize(){
    if(head==NULL){
        cout<<"Linkedlistis empty";
    }
    Node* temp = head;
    int cnt =0;
    do{
        temp=temp->next;
        cnt+=1;
    }
    while(temp!=head);
    cout<<"size of linked list is "<<cnt<<endl;
}

int main(){
    insertatbeg(5);
 insertatend(6);
 insertatend(7);
 insertatend(8);

insertatbeg(4);
insertatend(15);
 printsize();
 
    return 0;
}