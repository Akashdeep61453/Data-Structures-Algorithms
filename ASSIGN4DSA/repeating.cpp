//Write a program to find first non-repeating character in a string using Queue. Sample I/P: a a
//b c Sample O/P: a -1 b b
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the repeating string:"<<endl;
    getline(cin,s);
    queue<char>q;
    int freq[256]={0};
    for(char ch:s){
        freq[ch]++;
        q.push(ch);
        while(!q.empty() && freq[ch]>1){
            q.pop();
        }
        if(q.empty()){
            //q.push(-1);
            cout<<"-1 ";
        }
        else{
            cout<<ch<<" ";
        }
    }
  return 0;
}