#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int temp2 = n;
    int space = 2 * n - 1;
    int space1 = 1;

    int temp5 = 1;
    for (int i = 0; i <= n; i++)
    {
        int temp = n;

        for (int j = 0; j <= i; j++)
        {
            if (j != n)
            {
                cout << temp << " ";
                temp--;
            }
        }

        for (int j = space; j >= 1; j--)
        {
            cout << " "
                 << " ";
        }
        space = space - 2;

        int temp1 = temp2;
        for (int j = 0; j <= i; j++)
        {
            cout << temp1 << " ";
            temp1 = temp1 + 1;
        }
        temp2 = temp2 - 1;

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }

        for (int j = 1; j <= space1; j++)
        {
            cout << " "
                 << " ";
        }
        space1 = space1 + 2;

        for (int j = temp5; j <= n; j++)
        {
            cout << j << " ";
        }
        temp5 = temp5 + 1;

        cout << endl;
    }
}