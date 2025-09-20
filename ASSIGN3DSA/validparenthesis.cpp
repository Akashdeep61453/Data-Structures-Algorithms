#include<iostream>
#include<stack>
using namespace std;

int main(){
  char arr[]={'(','{','[',']',')',')'};
  stack<char>st;
  for(int i =0;i<sizeof(arr)/sizeof(char);i++){
    if(arr[i]=='('||arr[i]=='{' ||arr[i]=='['){
        st.push(arr[i]);
    }
    else if((arr[i]==')'&&st.top()=='(')||(arr[i]==']'&&st.top()=='[') ||(arr[i]=='}'&&st.top()=='{')){
            st.pop();
    }
  }
  if(st.empty()){
    cout<<"Valid Parenthesis!"<<endl;
  }
  else{
    cout<<"invalid parenthesis!"<<endl;
  }


    return 0;
}