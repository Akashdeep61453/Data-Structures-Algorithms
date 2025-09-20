#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char ch;
    cout<<"enter question part (a-e)"<<endl;
     cin>>ch;
     cin.ignore();
    switch(ch){
    case('a'):{
    string str,str2;
    cout<<"enter 1st string :"<<endl;
    getline(cin,str);
    cout<<"enter 2nd string :"<<endl;
    getline(cin,str2);
    string connect = str + str2;

    cout<<"the concatenated string is :"<<endl;
    cout<<connect;
    break;
    }
    case('b'):{
    string str;
    getline(cin,str);
    for(int i = 0 ; i < str.length()/2;i++){
        char temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = temp;
    }
    cout<<str<<endl;
    break;
    }
    case('c'):{
        int n;
        cout<<"enter size of character array"<<endl;
        cin>>n;
    char ch[n];
    cout<<"enter elements of character array :"<<endl;
    for(int i = 0 ;i<n;i++){
        cin>>ch[i];
    }
    string ans ="";
    for(int i = 0 ;i<n;i++){
        if((ch[i]=='A'||ch[i]=='a')||(ch[i]=='E'||ch[i]=='e')||(ch[i]=='I'||ch[i]=='i')
    ||(ch[i]=='O'||ch[i]=='o')||(ch[i]=='U'||ch[i]=='u')){
      
    }
    else{
        ans += ch[i];
    }
}
    cout<<ans<<endl;
        break;
    }
    case('d'):{
        int n;
        cout<<"enter size of string :"<<endl;
        cin>>n;
        cin.ignore();
        string str[n];
        for(int i = 0 ; i<n;i++){
            cout<<"enter "<<i+1<<"character "<<endl;
            cin>>str[i];
        }

        sort(str,str+n);
        for(int i = 0;i < n;i++){
            cout<<str[i]<<" ";
        }
        break;
    }
    case('e'):{
    // convert from uppercase to lowercase;
    char upper = 'H';
    char lower;
     lower = char(((int)upper)+32);
    cout<<lower<<endl;
        break;
    }
    
    default:{
    cout<<"No valid part "<<endl;
    }
}
    return 0;
}