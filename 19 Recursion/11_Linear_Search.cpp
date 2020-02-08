#include <iostream>
using namespace std;
int linearSearch(int *a, int noe, int key, int i)
{
    if (i == noe)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }
    else
    {
        return linearSearch(a, noe, key, i + 1);
    }
    return 0;
}
int main()
{
    int a[] = {2, 4, 33, 66, 8, 9, 0, 1};
    int numOfElements = sizeof(a) / sizeof(int);
    int key = 1;
    int i = 0;
    cout<< linearSearch(a, numOfElements, key, i);
}