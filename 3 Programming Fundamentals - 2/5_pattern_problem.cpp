#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int start;
    for (int row_num = 1; row_num <= n; row_num++)
    {
        if (row_num & 1)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int col = 1; col <= row_num; col++)
        {
            cout << start;
            start = not start;
        }
        cout << endl;
    }
}