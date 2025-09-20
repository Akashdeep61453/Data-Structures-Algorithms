#include<iostream>
using namespace std;
int main(){
    int a[20][3]={
         {3,3,3},
         {0,2,3},
         {1,0,4},
         {2,1,5}};
         int b[20][3];
         int n = a[0][2];
         int k = 1;

         //swaping the header
         b[0][1] = a[0][0];
         b[0][0] = a[0][1];
         b[0][2] = n;
        for(int col = 0; col< a[0][1];col++){
            for(int r = 1; r <= a[0][2];r++){
                if(a[r][1]==col){
                    b[k][0] =a[r][1];
                    b[k][1] = a[r][0];
                    b[k][2] = a[r][2];
                    k++;
                }
            }
        }
        cout<<"Transposed triplet :\n";
        for(int q = 0;q <= n ;q++){
            cout<<b[q][0] <<" "<<b[q][1]<<" "<<b[q][2]<<endl;
        }

    return 0;
}
