#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int temp = n - 2;
    int a[n] = {3, 2, 5, 1, 6, 9, 7};

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= temp; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j + 1], a[j]);
            }
        }
        temp = temp - 1;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << ",";
    }
    return 0;
}