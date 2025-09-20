#include<iostream>
#include<stack>
using namespace std;

int eval(string exp){
    stack<int> st;
    for(int i =0;i<exp.length();i++){
        char c = exp[i];
        if(isdigit(c)){
            st.push(c-'0');
        }
            else{
            int b=st.top(); st.pop();
            int a=st.top(); st.pop();
            if(c=='+') st.push(a+b);
            else if(c=='-') st.push(a-b);
            else if(c=='*') st.push(a*b);
            else if(c=='/') st.push(a/b);
        }
    }
    return st.top();
}
int main(){
    string exp="231*+9-";
    cout<<eval(exp);

return 0;
}
