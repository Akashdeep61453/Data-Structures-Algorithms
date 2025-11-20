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
void deleteatbeg(){
    if(head == NULL){
        cout<<"linkedlist is empty";
    }
    else{
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteatend(){
    if(head==NULL){
        cout<<"linkedlist is empty";
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->prev->next =NULL;// important
        delete temp;
    }
}

void deleteafterval(int val){
if(head==NULL){
    cout<<"linkedlist is empty"<<endl;
}
else{
    Node* temp = head;
    while(temp!=NULL && temp->val != val){
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"node not found"<<endl;
        return;
    }
    if(temp->next ==NULL){
        cout<<"no node exists after this value"<<endl;
        return;
    }
    Node* del = temp->next;
    
    if(del->next != NULL){
    del->next->prev=temp;
    }
    temp->next = del->next;
    delete del;
}
}
int main(){
    insertatbeg(5);
 insertatend(6);
 insertatend(7);
 insertatend(8);

insertatbeg(4);
insertatend(15);
printll();

deleteatbeg();
deleteatend();
deleteafterval(7);
printll();
    return 0;
}