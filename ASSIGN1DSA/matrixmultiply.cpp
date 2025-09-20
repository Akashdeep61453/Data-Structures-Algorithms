#include<iostream>
using namespace std;
int main(){
  int A[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

  int B[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
  int prod[3][3];
  for(int i = 0;i<3;i++){
    for(int j = 0 ;j<3;j++){
        prod[i][j] =0;
        for(int k = 0 ;k<3;k++){
            prod[i][j] += A[i][k]*B[k][j];
        }
    }
  }  
  for(int i = 0;i<3;i++){
    for(int j= 0;j<3;j++){
        cout<<prod[i][j]<<" ";
    }cout<<endl;
  }
  return 0;
}