#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row_num = 1; row_num <= n; row_num++)
    {
        // SPACES
        for (int j = 1; j <= n - row_num; j++)
        {
            cout << " ";
        }

        //INCREASING NUMBERS
        for (int value = row_num; value <= (2 * row_num) - 1; value++)
        {
            cout << value;
        }

        //DECREASING NUMBERS
        for (int k = ((2 * row_num) - 1) - 1; k >= row_num; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}