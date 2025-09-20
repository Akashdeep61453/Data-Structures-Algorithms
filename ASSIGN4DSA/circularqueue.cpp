#include<iostream>
#define MAXLEN 5
using namespace std;
// circular queue
typedef struct{
int element[MAXLEN];
int front,rear;
}queue;

int isEmpty(queue Q){
    return(Q.front==-1);   
}

int isFull(queue Q){
    return Q.front==(Q.rear=1)%MAXLEN;
}

int display(queue Q){
    if(isEmpty(Q)){
        cout<<"queue is empty!"<<endl;
        return;
    }
    int i;
    for(i = Q.front;i<=Q.rear;i=(i+1)%MAXLEN){
     cout<<Q.element[i]<<" ";
    }
}
int size(queue Q){
    if(isEmpty(Q)){
        return 0;}
    if(Q.rear >= Q.front){
    return(Q.rear -Q.front+1);
    }
    return MAXLEN-(Q.front-Q.rear-1);
}

queue enqueue(queue Q,int x){
    if(isFull(Q)){
        cout<<"Overflow!";
    }
    else if(isEmpty(Q)){
        Q.front = Q.rear = 0;
        Q.element[Q.rear] = x;
    }
    else{
        Q.rear = (Q.rear +1)%MAXLEN;
        Q.element[Q.rear] =x;
    }
    return Q;
}

queue dequeue(queue Q){
    if(isEmpty(Q)){
        cout<<"Underflow!";
    }
    else if(Q.front==Q.rear){
        Q.front==Q.rear==-1;
    }
    else{// no need to return the front value
        Q.front = (Q.front+1)%MAXLEN;
    }
    return Q;
}
int main(){
    queue Q;
    Q.front = Q.rear = -1;     
    int x;                   
    char ch;
    cout << "Enter subpart  ";
    cin >> ch;
    switch (ch){
        case 'a': 
            cout << "Enter value to enqueue: ";
            cin >> x;
            Q = enqueue(Q, x);
            break;
        case 'd': 
            Q = dequeue(Q);
            break;

        case 's': 
            cout << "Current size: " << size(Q) << endl;
            break;
        case 'p':
            display(Q);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}