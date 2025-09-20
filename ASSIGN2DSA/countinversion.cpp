#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,4,5,10,8,9,15,13,18,20};
    int cnt_inversion = 0;
    int i=0;
    int j = sizeof(a)/4;
    for(int s=0;s<j-1;s++){
        if(a[s] > a[s+1]){
            cnt_inversion++;
        }
    }
    cout<<cnt_inversion<<endl;

}