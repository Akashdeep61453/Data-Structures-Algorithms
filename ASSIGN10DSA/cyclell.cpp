#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(){
        val = 0;
        next=prev=NULL;
    }
    Node(int num){
        val = num;
        next=prev=NULL;
    }
};

Node* head = NULL;

void insertatend(int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

bool detectValueCycle(Node* head){
    int hash[100] = {0};

    Node* temp = head;

    while(temp != NULL){
        if(hash[temp->val] == 1){
            return true;   
        }
        hash[temp->val] = 1;
        temp = temp->next;
    }

    return false;
}

int main(){

    insertatend(4);
    insertatend(8);
    insertatend(7);
    insertatend(6);
    insertatend(5);
    insertatend(9);

    if(detectValueCycle(head)){
        cout << "true";
    } 
    else{
        cout << "false";
    }

    return 0;
}

