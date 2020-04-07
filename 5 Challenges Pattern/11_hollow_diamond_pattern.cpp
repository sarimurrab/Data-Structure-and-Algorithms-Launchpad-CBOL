#include <iostream>
using namespace std;
int spaces(int n, int temp, int count)
{
    if (n == 3)
    {
        return 0;
    }
    if (temp == n)
    {
        return count;
    }
    return spaces(n, temp + 2, count + 2);
}
int main()
{
    int n;
    cin >> n;
    if (n & 1 && (0 < n < 10))
    {

        int space = 1;
        for (int i = 1; i <= n / 2 + 1; i++)
        {
            for (int j = n / 2 + 1; j >= i; j--)
            {
                cout << "*"
                     << "\t";
            }
            ////////////////////////////////

            if (i > 1)
            {
                for (int i = 1; i <= space; i++)
                {
                    cout << " "
                         << "\t";
                }
                space = space + 2;
            }
            /////////////////////////////////

            for (int j = n / 2 + 1; j >= i; j--)
            {
                if (j != 1)
                {
                    cout << "*"
                         << "\t";
                }
            }
            /////////////////////////////////
            cout << endl;
        }
        ///////////////////////////////////////////////

        int temp2 = spaces(n, 5, 1);
        for (int i = 1; i <= n / 2; i++)
        {
            cout << "*"
                 << "\t";
            /////////////////////

            for (int j = 1; j <= i; j++)
            {
                cout << "*"
                     << "\t";
            }
            ///////////////////////////

            for (int j = temp2; j >= 1; j--)
            {
                cout << " "
                     << "\t";
            }
            temp2 = temp2 - 2;
            //////////////////////////////
            for (int j = 1; j <= i; j++)
            {
                if (j != n / 2)
                {
                    cout << "*"
                         << "\t";
                }
            }
            /////////////////////////////
            cout << "*"
                 << "\t";
            cout << endl;
        }
    }
}