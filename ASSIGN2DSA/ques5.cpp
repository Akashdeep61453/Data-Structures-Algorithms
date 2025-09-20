#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"enter question number (a-e)"<<endl;
    cin>>ch;
    switch(ch){
        case('a'):{
            
            int arr[3][3]={{1,0,2},{0,5,0},{0,0,9}};
            int ans[3];
            for(int i = 0;i<3;i++){
                ans[i]=arr[i][i];
    
                }
            
            cout<<"values of diagnoal matix are:"<<endl;
            for(int i =0;i<3;i++){
                cout<<ans[i];
            }
            break;
        }
        case('b'):{
            int arr[3][3]={
                {1,2,3},
                {4,5,6},
                {7,8,9}};
            int ans1[3];
            int ans2[2];
            int ans3[2];
            for(int i = 0 ; i< 3;i++){
                ans1[i] = arr[i][i];
            }
            for(int i =1;i<3;i++){
                ans2[i-1] = arr[i][i-1];
                ans3[i-1] =arr[i-1][i]; 
            }
            cout<<"main diagnoal is :"<<endl;
            for(int i = 0 ;i<3;i++){
                cout<<ans1[i]<<" ";
            }
            cout<<endl;
            cout<<"secondary diagonals are :"<<endl;
            for(int i = 0;i<2;i++){
                cout<<ans2[i]<<" ";
            }
            cout<<endl;
            for(int i = 0;i<2;i++){
                cout<<ans3[i]<<" ";
            }
            break;
        }
        case('c'):{
            int arr[3][3]={
                {1,0,0},
                {4,7,0},
                {3,8,4}};
            vector<int>ans;
            //int k = 0;
            for(int i =0;i<3;i++){
                for(int j = 0;j<1+i;j++){
                    ans.push_back( arr[i][j]);
                ;
            }
            }cout<<"lower triangular matrix elements are :"<<endl;
            
                for(int i= 0;i < ans.size();i++){
                    cout<<ans[i]<<" ";
                }
            break;
        }
        case('d'):{
             int arr[3][3]={
                {1,4,5},
                {0,4,0},
                {0,6,5}};
            vector<int>ans;
            for(int i =0;i<3;i++){
                for(int j = i;j<3;j++){
                    ans.push_back( arr[i][j]);
                ;
            }
            }cout<<"upper triangular matrix elements are :"<<endl;
            
                for(int i= 0;i < ans.size();i++){
                    cout<<ans[i]<<" ";
                }
            break;
        }
        case('e'):{
        int arr[3][3]= {
            {1,2,3},
            {2,5,6},
            {3,6,8}};
        for(int i = 0;i<3;i++){
            for(int j =0;j<3 ; j++){
            if(arr[i][j]==arr[j][i]){
            }
            else{
                cout<<"matrix is not symmetric";
                break;
            }
        }  
        }
        cout<<"matrix is symmetric ";
        vector<int>ans;
        for(int i = 0;i<3;i++){
            for(int j =0;j<i+1;j++){
                ans.push_back(arr[i][j]);
            }
        }
        cout<<"symmetrical elements of matrix are :"<<endl;
        for(int i = 0 ;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
            break;
        }
        default:{
            cout<<"No valid question:"<<endl;
        }
    }
    return 0;
}