#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    //INPUT
    for (int i = 0; i <= n - 1; i++) //FOR ROW
    {
        for (int j = 0; j <= n - 1; j++) //FOR COLUMN
        {
            cin >> arr[i][j];
        }
    }

    //CODE

    for (int j = n - 1; j >= 0; j--)
    {
        for (int i = 0; i <= n - 1; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}