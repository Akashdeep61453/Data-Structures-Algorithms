#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){ 
    for(int i = 0;i < n-1; i++){
   for(int j = 0; j < n-i; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      } 
   
}}
}
int main(){
    int n;
    cout<<"enter no of elements and elements :"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // 64 34 25 12 22 11 90
    bubble_sort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}