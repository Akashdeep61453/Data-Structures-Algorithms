// //Given two arrays, find the common elements using a hash set.
// Input:
// A = [1, 2, 3, 4]
// B = [3, 4, 5, 6]
// Output:
// 3, 4k
#include<iostream>
using namespace std;

int main(){
int A[]={3,3,4,4};
int B[]={3,4,5,6};
int common[4];
int hash[8]={0};
for(int i=0; i<4; i++){
    hash[A[i]] += 1;
}
for(int i=0; i<4; i++){
    hash[B[i]]+= 1;
}
cout<<"common elements are :"<<endl;
for(int i=0; i<4; i++){
    if(hash[A[i]] > 1){
        // cout<<hash[A[i]]<<endl;
        cout<<A[i]<<endl;
        hash[A[i]] =0; // imp
    }
}

    return 0;
}