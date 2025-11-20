#include<iostream>
using namespace std;

int main(){
    int n=5;
     int arr[5]={22,18,89,14,80};
     //Selection sort; x
     int min,max;
     for(int i=0;i<n-i-1;i++){
        min=i;
        max =i;
          for(int j=i;j<n-i-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            if(arr[j]>arr[max]){
                max=j;
            }
           } 
           int temp = arr[i];
           arr[i]=arr[min];
           arr[min]=temp;

           if(max==i){
            max=min;
        }
           int temp2 = arr[5-i-1];
           arr[5-i-1]=arr[max];
           arr[max]=temp2;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    
    return 0;

}