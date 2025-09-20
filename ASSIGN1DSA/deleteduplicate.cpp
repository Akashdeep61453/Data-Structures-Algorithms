#include<iostream>
using namespace std;
int main(){
int arr[]= {10,20,30,30,40,50,40};
int sizearr = (sizeof(arr))/4;
int duparr[sizearr];
int duparrsize =0;
for(int i = 0;i< sizearr;i++){
        bool isduplicate = false;
    for(int j =0; j< duparrsize;j++){
        if(arr[i]==arr[j]){
            isduplicate = true;
           break;
        }
    }   if(!isduplicate){
           duparr[duparrsize]=arr[i];
           duparrsize +=1;
    }
}
cout<<"The array after removing duplicates is : "<<endl;
for(int i = 0;i<duparrsize;i++){
    cout<<duparr[i]<<" ";
}


return 0;
}

   