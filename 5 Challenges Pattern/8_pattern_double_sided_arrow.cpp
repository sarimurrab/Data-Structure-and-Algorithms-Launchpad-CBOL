#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int space = n - 1;
    int in_space = 1;
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int j = space; j >= 1; j--) //FIrst space
        {
            cout << " "
                 << " ";
        }
        space = space - 2;

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        if (i > 1) //INNERSPACE
        {
            for (int j = 1; j <= in_space; j++)
            {
                cout << "-"
                     << " ";
            }
            in_space = in_space + 2;
        }

        if (i > 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    //SECOND HALF
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= space + 4; j++) //FIrst space
        {
            cout << " "
                 << " ";
        }
        space = space + 2;

        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        if (i > 1) //INNERSPACE
        {
            for (int j = in_space - 2; j >= 1; j--)
            {
                cout << "-"
                     << " ";
            }
            in_space = in_space - 2;
        }

        if (i > 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}