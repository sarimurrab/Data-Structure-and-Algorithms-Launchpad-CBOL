#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        ///////////////////////////////
        if (i > 1)
        {
            for (int j = 1; j <= temp; j++)
            {
                cout << "*"
                     << " ";
            }
            temp = temp + 2;
        }

        cout << endl;
    }
}