//Linked List :  1->2->1->2->1->3->1 , key:  1
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class LinkedList{
private:
    Node *head;
public:
    LinkedList()
    {
        head = nullptr;
    }
 void insertatbeg(int value){
        if(head==NULL){
        Node *newNode = new Node(value);
        head = newNode;
        head->next = NULL;
        }
        else{
            Node * newNode= new Node(value);
            newNode->next = NULL;
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
   void reverselinkedlist(){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr= next;
    }
    head = prev;
   }
    void printLL(){
        Node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};
int main()
{
   // Node *head = new Node(5);

    LinkedList newList;
    newList.insertatbeg(1);
    newList.insertatbeg(2);
    newList.insertatbeg(3);
    newList.insertatbeg(4);
    newList.insertatbeg(5);
    newList.insertatbeg(6);
    newList.insertatbeg(7);

    newList.reverselinkedlist();
    newList.printLL();
    return 0;
}
