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
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}