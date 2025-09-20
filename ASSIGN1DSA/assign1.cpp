#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    int arr[n];
    // creation of array;
    for(int i = 0 ; i< n ;i++){
        cin>>arr[i];
    }
    //Display of array;
    for(int i = 0 ; i< n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}