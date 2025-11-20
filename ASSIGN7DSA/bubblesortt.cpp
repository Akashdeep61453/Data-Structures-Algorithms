#include<bits/stdc++.h>
using namespace std;

//Best case time complexity =  O(n);
// worst case time complexity = O(n.square)
int main(){
    int n=5;
     int arr[5]={22,18,89,14,80};
     //bubble sort;
     int max;
     int didSwap=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            didSwap=1;
         }
        }
        if(didSwap==0){
        cout<<"the array is already sorted!";
        break;
    }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
     }
    return 0;
    }