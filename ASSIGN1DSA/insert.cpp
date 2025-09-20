#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[50] = {10,20,30,40,50};
    int pos,val;
    cout<<"Enter position and value";
    cin>>pos>>val;
    cout<<"array before insertion "<<endl;
    for(int i = 0 ; i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"array after insertion"<<endl;
    for(int i = size; i>=pos;i--){
       arr[i+1] = arr[i];
    }
    arr[pos]= val;
    size++;
    for(int i = 0 ; i < size;i++){// NO need to again size++
        cout<<arr[i]<<" ";
    }
    return 0;
}