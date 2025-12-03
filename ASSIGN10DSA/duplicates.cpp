#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1};
    int hash[4]={0};
    for(int i=0; i<4; i++){
        // hash[i]+=1;
        hash[arr[i]] += 1;
    }
    int val =0;
    for (int i=0; i<4; i++){
        if(hash[i]>1){
            val =1;
            break;
        }
    }
    if(val == 0){
            cout<<"duplicates are not present";
    }
    else{
            cout<<"duplicates are present";
        }
    return 0;
}