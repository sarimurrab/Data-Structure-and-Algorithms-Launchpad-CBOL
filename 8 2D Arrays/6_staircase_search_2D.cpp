#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];

    //TAKING INPUT
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    //INPUT THE KEY TO SEARCH IN 2D ARRAY
    int key;
    cin >> key;
    bool flag = false;

    //CODE
    int start_row = 0;
    int end_column = n - 1;

    while (start_row <= n - 1 && end_column >= 0)
    {
        if (arr[start_row][end_column] == key)
        {
            cout << "Key is found at cordinate (" << start_row << "," << end_column << ")";
            flag = true;
            break;
        }
        else if (arr[start_row][end_column] < key)
        {
            start_row++;
        }
        else
        {
            end_column--;
        }
    }

    if (flag == false)
    {
        cout << "Key is Not Found";
    }
    return 0;
}

/*
1   2   3   4   5
6   7   8   9   10
11  12  13  14  19
15  16  17  18  20
*/