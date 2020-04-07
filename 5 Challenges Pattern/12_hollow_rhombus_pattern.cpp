#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 20)
    {

        for (int i = 1; i <= n; i++)
        {
            for (int j = n - 1; j >= i; j--)
            {
                cout << " ";
            }
            ///////////////////////////
            cout << "*";
            //////////////////////////
            if (i == 1 || i == n)
            {
                for (int j = 1; j < n - 1; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int j = 1; j < n - 1; j++)
                {
                    cout << " ";
                }
            }
            ////////////////////////////////
            cout << "*";

            cout << endl;
        }
    }
}