#include<iostream>
#include<stack>
using namespace std;
int main(){

stack<int>st;
int arr[]={1,2,5,3,8,6,9};
int newans[7];
for(int i =0;i<sizeof(arr)/sizeof(int);i++){
    if(i==0){
    newans[i] =-1;
    st.push(arr[i]);
}
   else if(arr[i]> st.top()){
    newans[i] = st.top();
    st.push(arr[i]);
   }
   else{
    while(!st.empty() &&arr[i]<st.top()){
        st.pop();
    }
    if(!st.empty()){
        newans[i]=st.top();
    }
    else{
        newans[i] =-1;
    }
    st.push(arr[i]);
   }

}
for(int i =0;i<7;i++){
cout<<newans[i]<<" ";
}
    return 0;
}