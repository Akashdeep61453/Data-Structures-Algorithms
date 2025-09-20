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

     void findmiddle(){
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        int cnt = 0;
        Node* temp = head;
        while (temp != NULL){
            cnt++;
            temp = temp->next;
        }

        int mid = cnt / 2;
        temp = head;
        int i = 0;
        while (i < mid) {
            temp = temp->next;
            i++;
        }

        cout << "The middle node is " << temp->data << endl;
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
    newList.insertatbeg(6);
//newList.removeOccurrences(10);
newList.findmiddle();
    newList.printLL();
    return 0;
}
