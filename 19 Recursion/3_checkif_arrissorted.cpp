#include <iostream>
using namespace std;
bool checkif(int *a, int n)
{
    if (n == 1)
    {
        return true;
    }
    if (a[0] < a[1] && checkif(a + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 5;
    int a[] = {1, 21, 33, 35};
    cout << checkif(a, n); //if 1 means sorted
                           //if 0 means not sorted
}

