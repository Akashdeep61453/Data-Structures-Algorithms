#include <iostream>
using namespace std;

int main() {
    int a[20][3] = {
        {3, 3, 3}, // rows, cols, non-zero count
        {0, 2, 3},
        {1, 0, 4},
        {2, 1, 5}
    };
    int b[20][3] = {
        {3, 3, 3},
        {1, 2, 1},
        {1, 1, 2},
        {2, 1, 6}
    };
    int c[40][3];
    
    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    int i = 1, j = 1, k = 1;
    
    while (i <= a[0][2] && j <= b[0][2]) {
        if (a[i][0] == b[j][0] &&a[i][1] ==b[j][1]){
            c[k][0] =a[i][0];
            c[k][1] =a[i][1];
            c[k][2] =a[i][2] + b[j][2];
            i++;j++;k++;
        }
        else if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1]<b[j][1])) {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            i++; k++;
        }
        else {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            j++; k++;
        }
    }
    while (i <= a[0][2]) {
         c[k][0]=a[i][0]; c[k][1]=a[i][1]; c[k][2]=a[i][2]; i++; k++; }
    while (j <= b[0][2]){
         c[k][0]=b[j][0]; c[k][1]=b[j][1]; c[k][2]=b[j][2]; j++; k++; }
    
    c[0][2] = k - 1; 
    
    for (int x = 0; x <= c[0][2]; x++)
        cout << c[x][0] << " " << c[x][1] << " " << c[x][2] << endl;
}
