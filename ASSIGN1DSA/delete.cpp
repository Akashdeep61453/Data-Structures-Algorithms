#include<iostream>
using namespace std;
int main(){
   int size = 5;
   int arr[50] = {10,20,30,40,50};
   int pos,val;
   cout<<"Enter pos and val to deleted"<<endl;
   cin>>pos>>val;
   cout<<"array before deletion"<<endl;
   for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"array after deletion"<<endl;
   for(int i = pos;i < size; i++){
     arr[i] = arr[i+1];
   }
   size--;
for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}