#include <iostream>
using namespace std;

int main(){
    int A[20][3] = {
        {3, 3, 3},
        {0, 0, 1},
        {1, 1, 2},
        {2, 2, 3}};
    int B[20][3] ={
        {3, 3, 3},
        {0, 0, 4},
        {1, 1, 5},
        {2, 2, 6}};
    int C[40][3];
    C[0][0] = A[0][0];
    C[0][1] = B[0][1];
    int k = 1;

    for (int i =1; i <=A[0][2]; i++){
        for (int j =1; j <=B[0][2]; j++)
        {
            if (A[i][1] == B[j][0])
            {
                int r = A[i][0];
                int c = B[j][1];
                int val = A[i][2] * B[j][2];

                bool found = false;
                for (int x = 1; x <k; x++){
                    if (C[x][0] == r &&C[x][1] == c){
                        C[x][2] += val;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    C[k][0] = r;
                    C[k][1] = c;
                    C[k][2] = val;
                    k++;
                }
            }
        }
    }
    C[0][2] = k - 1; 
    for (int i = 0; i <= C[0][2]; i++)
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
}
