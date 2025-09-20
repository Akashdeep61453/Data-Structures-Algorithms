#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the number of non zero entries";
    cin >> n;
    int row, col;

    int arr[3][n];

    cout << "\nEnter the number of rows";
    cin >> row;
    cout << "\nEnter the number of columns";
    cin >> col;
    arr[2][0] = n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the row of the " << i+1 << " non zero element";
        cin >> arr[0][i];
        cout << "\nEnter the col of the " << i+1 << " non zero element";
        cin >> arr[1][i];
        cout << "\nEnter the value of the " << i+1 << " non zero element";
        cin >> arr[2][i];
    }

    int k = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == arr[0][k] && j == arr[1][k])
            {
                cout << " " << arr[2][k];
                k++;
                continue;
            }
            cout << " 0";
        }
        cout << "\n";
    }

    cout << "\nTriplet : \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << "\n";
    }

    cout << "\nTranspose of triplet is : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << arr[j][i];
        }
        cout << "\n";
    }
    return 0;
}