#include<iostream>
using namespace std;

class Node{
public:
char val;
Node* next;
Node* prev;

Node(){
    val =' ';
    next=prev=NULL;
}
Node(char ch){
    val = ch;
    next = prev= NULL;
}
};

Node* head = NULL;

void insertatend(char ch){
    Node* newNode = new Node(ch);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
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

bool checkpalindrome(){
    if(head == NULL){
        return true;
    }
    Node* left = head;
    Node* right = head->prev;

    while(left != right && right->prev != left){
        if(left->val != right->val){
            return false;
        }
        else{
            left = left->next;
            right = right->prev;
        }
        }  
          return true;// must outside the while loop

}

int main(){
    insertatend('r');
    insertatend('a');
    insertatend('d');
    insertatend('s');
    insertatend('r');

    if(checkpalindrome()){
        cout<<"Linked list is palindrome"<<endl;
    }
    else{
        cout<<"Linked list is not palindrome"<<endl;
    }

    return 0;
}
