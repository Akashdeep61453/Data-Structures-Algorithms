#include<iostream>
#define MAXLEN 5
using namespace std; 

typedef struct{// no structure  only struct
    int element[MAXLEN];
    int top;
}stack;

stack init(){
    stack S;
    S.top = -1;
    return S;
}
int isEmpty(stack S){
    return(S.top==-1);
}

int isfull(stack S){
    return(S.top==MAXLEN-1);
}

int top(stack S){
    if(isEmpty(S)){
        cout<<"Stack is empty!"<<endl;
    }
    else{
        return S.element[S.top];
    }
}

stack push(stack S, int x){
    if(isfull(S)){
        cout<<"overflow";
    }
    else{
        ++S.top;
        S.element[S.top]=x;
    }
    return S;
}
stack pop(stack S){
    if(isEmpty(S)){
        cout<<"underflow!";
    }
    else{
        --S.top;
        ;
    }
    return S;
}
void print(stack S){
    int i;
    for(i = S.top;i>=0;i--){
        cout<<S.element[i]<<" ";
    }
}

int main(){
    stack S;
    S=init();
    S=push(S,10);
    S =push(S,45);
    S =push(S,1);
    S =push(S,50);
    cout<<"Current stack : "<<endl; 
    print(S);
   cout<<" with top = "<< top(S); 
    S = pop(S);
    S=pop(S);
    cout<<"Current stack:"<<endl;
    print(S);
    cout<<"with top ="<<top(S);
    
    return 0;
}