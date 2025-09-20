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
   
    void printLL(){
        Node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
    void removeOccurrences(int val) {
        while (head != NULL && head->data == val) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }

        Node *current = head;
        Node *prev = NULL;

        while (current != NULL) {
            if (current->data == val) {
                Node *temp = current;
                prev->next = current->next;
                current = current->next;
                delete temp;
            } else {
                prev = current;
                current = current->next;
            }
        }
    }
    
};
int main()
{
   // Node *head = new Node(5);

    LinkedList newList;
    newList.insertatbeg(10);
    newList.insertatbeg(20);
    newList.insertatbeg(10);
    newList.insertatbeg(20);
    newList.insertatbeg(10);
    newList.insertatbeg(30);
newList.removeOccurrences(10);
    newList.printLL();
    return 0;
}
