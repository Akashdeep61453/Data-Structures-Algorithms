#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    for(int i = 0 ;i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-1-i] = temp;
    }
    
    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}