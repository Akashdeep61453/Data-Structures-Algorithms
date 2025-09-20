#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,4,60,60,75};
    int cnt = 0;
    cout<<sizeof(arr)/4<<endl;
    for(int i= 0; i< (sizeof(arr)/4)-1; i++){
        if(arr[i] != arr[i+1]){
            cnt++;
        }
    }
    cout<<"Total number of distint elemens are :"<<endl;
    cout<<cnt+1;
    return 0;
}