#include <iostream>
using namespace std;
int spaces_calc(int n, int temp, int count)
{
    if (temp == n)
    {
        return count;
    }
    return spaces_calc(n, temp + 2, count + 1);
}
int main()
{
    int n;
    cin >> n;
    if (n & 1 && n >= 5)
    {

        int spaces = spaces_calc(n, 5, 1);
        int temp = spaces_calc(n, 5, 3);
        for (int i = 1; i <= n / 2; i++)
        {
            cout << "*";

            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }

            if (i == 1)
            {
                for (int j = 1; j <= temp; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "*";
            }

            cout << endl;
        }
        ///////////////////////////////////////////////////////////////
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << endl;
        //////////////////////////////////////////////////////////////

        int templ1 = spaces_calc(n, 5, 2);
        for (int i = 1; i <= n / 2; i++)
        {
            ///////////////////////////////
            for (int j = 1; j <= templ1; j++)
            {
                if (i == n / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            ///////////////////////////
            cout << "*";
            //////////////////////////
            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }
            //////////////////////////
            cout << "*";

            cout << endl;
        }
    }
}