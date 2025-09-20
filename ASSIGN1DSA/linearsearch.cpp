#include<iostream>
using namespace std;
int main(){
    int size =  5;
    int ele = 50;
    int arr[50] = {10,20,30,40,50};
    for(int i = 0 ; i < size;i++){
        if(arr[i]==ele){
            cout<<ele<<" found at index :"<<i;
        break;
        }
    }
   
    return 0;
}