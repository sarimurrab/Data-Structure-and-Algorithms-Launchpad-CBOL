#include <iostream>
using namespace std;
// void bubble_Sort(int a[], int n)       // 1. one for loop inside
// {
//     if (n == 1)
//     {
//         return;
//     }
//     for (int j = 0; j <= n - 2; j++)
//     {
//         if (a[j] > a[j + 1])
//         {
//             swap(a[j], a[j + 1]);
//         }
//     }

//     bubble_Sort(a, n - 1);
// }
void bubble_Sort2(int a[], int n, int j) // 2. Pure recursion
{
    //Base Case
    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        return bubble_Sort2(a, n - 1, 0);
    }

    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
        // for applying swapFunc for all values upto last in 1 iteration
    }

    bubble_Sort2(a, n, j + 1);
    return;
}
int main()
{
    int a[] = {3, 4, 5, 6, 7, 3, 5, 1};
    int n = 8;
    //bubble_Sort(a, n);
    bubble_Sort2(a, n, 0);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}