#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter number of rows and columns "<<endl;
    cin>>row>>column;
    int arr[row][column];
    cout<<"enter elements of 2d array"<<endl;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int rows_sum;
    int columns_sum;
    for(int i = 0;i<row;i++){
        rows_sum = 0;
        for(int j = 0;j<column;j++){
            rows_sum += arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is = "<<rows_sum<<endl;
    }
      for(int i = 0;i<column;i++){
        columns_sum = 0;
        for(int j = 0;j<row;j++){
            columns_sum += arr[j][i];
        }
        cout<<"sum of column "<<i+1<<" is "<<columns_sum<<endl;
    }
    // cout<<"sum_rows = "<<rows_sum<<endl;
    // cout<<"sum_columns = "<<columns_sum<<endl;
return 0;   // SOMETIMES NOT WRITING IT CAN CAUSE ERROR
}