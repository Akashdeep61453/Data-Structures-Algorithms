// Count the frequency of each number in an array using a hash map.
// Input:
// nums = [2, 3, 2, 4, 3, 2]
#include<iostream>
using namespace std;
int main(){
int arr[] = {2,3,2,4,3,2};
int hash[6] ={0};

for(int i=0; i<6; i++){
hash[arr[i]] += 1;
}
cout<<"printing the frequency"<<endl;
for(int i=0; i<6; i++){
    if(hash[arr[i]] > 1){
        cout<<arr[i]<<"->"<<hash[arr[i]]<<endl;// do not use hash[i] here
        hash[arr[i]] = 0;
    }
}
return 0;
}