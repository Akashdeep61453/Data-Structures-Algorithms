#include<iostream>
using namespace std;
int main(){
 int arr [6] = {1,3,5,7,9,13};
 int diff = arr[1]-arr[0];
   for(int i = 1 ; i <= 5; i++){
         if((arr[i+1]-arr[i]) != diff){
            cout<<"The missing number in a sorted array is :"<<endl;
             cout<<arr[i] + diff;
             break;
         }
        
   }

    return 0;
}