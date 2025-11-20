#include<bits/stdc++.h>
using namespace std;

int quicksort(int arr[],int low,int high){
    int i= low+1;
    int j= high;
while(i<=j){
       while(arr[i]<=arr[low] && i<=high){
        i++;//<= to put same size in left part
       }
       while(arr[j]>arr[low]&& arr[j]>=low){
        j--;
       }
       if(i<j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       }
    }
     swap(arr[low],arr[j]);
    return j;// pivot index;
    // it returns the pivot index;
}

void QuickSort(int arr[],int low, int high){
    if(low<high){
         int pivot_index =quicksort(arr,low,high);
        QuickSort(arr,low,pivot_index-1);
        QuickSort(arr,pivot_index+1,high);
    }
}
int main(){
    int n=6;
    int arr[]={50,35,98,12,6,17};
    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}