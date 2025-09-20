#include <iostream>
#include <queue>
using namespace std;

class StackUsingOneQueue {
private:
    queue<int>q;

public:
    void push(int x){
        int size = q.size();
        q.push(x);
        for(int i = 0; i < size; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if (q.empty()){
            cout << "Stack is empty";
            return;
 }
        q.pop();
    }
    int top(){
        if (q.empty()) {
            cout << "Stack is empty";
            return -1;
        }
        return q.front();
    }

    bool empty(){
        return q.empty();
    }
};

int main(){
    StackUsingOneQueue st;
    st.push(100);
    st.push(200);
    st.push(300);
    cout << "top"<< st.top() << endl;
    st.pop();
    cout << "top after pop" << st.top() << endl;
    return 0;
}
