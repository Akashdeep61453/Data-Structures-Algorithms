#include<bits/stdc++.h>
using namespace std;

int priority(char ch){
   if(ch == '+'|| ch=='-'){
    return 1;
   }
   else if(ch =='^'){
    return 3;
   }
   else if(ch=='*'||ch=='/'){
    return 2;
   }
   else return -1;
}
int main(){
    string  s;//infix;
    cin>>s;
    string ans = "";
    stack<char>st;
    
    int i = 0;
    while(i < s.length()){
        if((s[i]>='A'&&s[i]<='Z')||
        (s[i]>='a'&&s[i]<='z')
    ||(s[i]>='0'&&s[i]<='9')){
        ans.push_back(s[i]);
    }
    else if(s[i] == '('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        while(!st.empty() && st.top() !='('){
            ans.push_back(st.top());
            st.pop();
        }
        if(!st.empty()) st.pop();
    }
    else{
        if(s[i] == '^'){
            while(!st.empty() && priority(st.top()) > priority(s[i])){
                ans.push_back(st.top());
                st.pop();
            }
        }
            else{
                while(!st.empty() && priority(s[i])<= priority(st.top())){
                    ans.push_back(st.top());
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        i++;
    }
    
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    
    cout<<ans<<endl;   


    return 0;
}