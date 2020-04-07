#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 10)
    {
        int num = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << " ";
            }
            ///////////////////////////////
            for (int j = 1; j <= i; j++)
            {
                if (j == 1)
                    cout << 1 << " ";
                else
                {
                    num = num * (i - j + 1) / (j - 1);
                    cout << num << " ";
                }
            }

            cout << endl;
        }
    }
}