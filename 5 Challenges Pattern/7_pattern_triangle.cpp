#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = 0;
    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++) // SPACES
        {
            cout << "*"
                 << "\t";
        }

        spaces--;

        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << "\t";
        }

        if (i > 1)
        {

            for (int j = temp; j >= i; j--)
            {
                cout << j << "\t";
            }
        }
        temp = temp + 2;
        cout << endl;
    }
}