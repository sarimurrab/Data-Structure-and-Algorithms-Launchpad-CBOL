#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];

    //INPUT
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> a[i][j];
        }
    }
    // SPIRAL PRINT
    int sr = 0, sc = 0, er = m - 1, ec = n - 1;

    while (sr <= er && sc <= ec)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << " ";
        }
        sr++;
        for (int i = sr; i <= er; i++)
        {
            cout << a[i][ec] << " ";
        }
        ec--;
        if (sc < ec) //to AVOID FAIL COND of print twice no IN 5,3 input
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << a[er][i] << " ";
            }
        }
        er--;
        if (sr < er) //to AVOID FAIL COND of print twice no IN 5,3 input
        {
            for (int i = er; i >= sr; i--)
            {
                cout << a[i][sc] << " ";
            }
        }
        sc++;
    }
}

/*  SPIRAL PRINTING IN 2D ARRAY
1   2   3   4   5
6   7   8   9   10
11  12  13  14  19
15  16  17  18  20

1   2   3   
6   7   8   
11  12  13  
15  16  17 
18  19  20

*/
