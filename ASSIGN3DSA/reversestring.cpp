#include<iostream>
#include<stack> 
using namespace std;
int main(){
    char arr[]={'D','a','t','a',' ','S','t','r','u','c','t','u','r','e','s'};
    stack<char>st;
    for(int i=0;i<sizeof(arr)/sizeof(char);i++){
        st.push(arr[i]);
    }

    for(int i=0;i<sizeof(arr)/sizeof(char);i++){
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}