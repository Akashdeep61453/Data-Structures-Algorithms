#include<iostream>
#define MAXLEN 5
using namespace std;

typedef struct {
    int element[MAXLEN];
    int front, rear;
} queue;

queue init(){
    queue Q;
    Q.front = -1;
    Q.rear = -1;
    return Q;
}

  int isEmpty(queue Q) {
    return (Q.front == -1 || Q.front > Q.rear);
}

int isFull(queue Q){
    return Q.rear == MAXLEN - 1;
}

void display(queue Q){
    if(isEmpty(Q)) {
        cout << "Queue is empty!" << endl;
        return;
    }
    for(int i =Q.front; i<= Q.rear; i++) {
        cout << Q.element[i] << " ";
    }
    cout << endl;
}

int size(queue Q){

    if(isEmpty(Q)) return 0;
    return (Q.rear - Q.front + 1);
}

queue enqueue(queue Q){
    int value;
    cout<<"enter value to insert";
    cin>>value;
    if(isFull(Q)) {
        cout << "Overflow!" << endl;
    
    }
    else if(isEmpty(Q)){
        Q.front = Q.rear =0;
        Q.element[Q.rear] =value;
    }
    else{
Q.rear++;
        Q.element[Q.rear] = value;
    }
    return Q;
}

queue dequeue(queue Q){
    if(isEmpty(Q)) {
        cout << "Underflow!" << endl;
    }
    else{
        Q.front++;
    }
    return Q;
}

int main(){
    queue Q = init();
    int n;
    cout<<"Enter subpart of 1: "<<endl;
    cin >> n;

    switch(n){
        case 1:
            Q = enqueue(Q);
           display(Q);
            break;

     case 2: // dequeue;
    Q = dequeue(Q);
    display(Q);
    break;

        case 3:// display
        display(Q);
        break;

        case 4:
        cout<<"size of queue is "<<size(Q);
    }
    return 0;
}
