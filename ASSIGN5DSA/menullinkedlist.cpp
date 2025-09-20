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
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }
    }
    void insertatend(int value){  
        Node *newNode = new Node(value);
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            return;
        }
    
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;

    }

    void insertaftervalue(int num, int val)
    {
        Node *newNode = new Node(num);
        Node *temp = head;
        while (temp != NULL && temp->data != val)
        {
            temp = temp->next;
        }
        if(temp == NULL){
            cout<<"value not found"<<endl;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void deletefrombeg(){
        if(head == NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void delete_fromend(){
        if(head == NULL){
            cout<<"linked list is empty!"<<endl;
            return;
        }
        if(head->next == NULL){
            delete head->next;
            head->next = NULL;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void deleteNode(int value){
        Node* temp = head;
         if (head->data == value) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        while(temp->next != NULL && temp->next->data != value){
            temp = temp->next;
        }
        Node* nodetodelete = temp->next;
        temp->next = temp->next->next;
        delete nodetodelete;
    }
    void searchnode(int value){
        int cnt = 1;
        Node* temp = head;
        while(temp->data != value && temp != NULL){
            temp = temp->next;
            cnt++;
        }
        cout<<"the position of node "<<value<<" is "<<cnt<<endl;
    }
    void printLL()
    {
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
    newList.insertatbeg(10);
    newList.insertatend(50);
    // 10,5,50
    newList.insertaftervalue(35, 50);
    //newList.printLL();
    //newList.deleteNode(50);
    cout<<endl;
     newList.searchnode(50);
    newList.printLL();
}