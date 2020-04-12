#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];

    //INPUT
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cin >> a[i][j];
        }
    }
    //OUTPUT
    for (int i = 0; i <= col - 1; i++)
    {
        for (int j = 0; j <= row - 1; j++)
        {
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}

/*
1   2   3   4   5
6   7   8   9   10
11  12  13  14  19
15  16  17  18  20
*/
