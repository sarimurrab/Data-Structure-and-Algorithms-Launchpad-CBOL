#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int spaces = n * 2 - 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j != n)
                cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "\t";
        }
        for (int j = i; j >= 1; j--)
        {

            cout << j;
        }
        spaces = spaces - 2;
        cout << endl;
    }
}