#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter elements of array :"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"enter element to search:"<<endl;
    cin>>ele;
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid] == ele){
            cout<<"Ele found at ind : "<<mid;
            break;
        }
        else if(arr[mid] < ele){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;

}