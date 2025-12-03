// 4. Find the first non-repeating element in an array using a hash map.
// Input:
// [4, 5, 1, 2, 0, 4]
// Output:
// 5
#include<iostream>
using namespace std;

int main(){
int arr[]={4,5,1,2,0,4};

int hash[6]={0};
for(int i=0; i<6; i++){
    hash[arr[i]] += 1;
}
for(int i=0; i<6; i++){
    if(hash[arr[i]] ==1){
        cout<<"first element is "<<arr[i]<<endl;
        break;// break is imp
    }
}
}