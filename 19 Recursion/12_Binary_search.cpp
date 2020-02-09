#include <iostream>
using namespace std;
int binarySearch(int *a, int i, int noe, int key)
{
    if (i > noe)
    {
        return -1;
    }
    int mid = (i + noe) / 2;
    if (a[mid] == key)
       { return mid; }
    else if (a[mid] > key)
        return binarySearch(a, i, mid - 1, key); 
    else
        return binarySearch(a, mid + 1, noe, key); 

    
}
int main()
{
    int a[] = {2, 3, 5, 11, 22, 44, 56};
    int noe = sizeof(a) / sizeof(int);
    int key = 5;
    int i = 0;
    cout << binarySearch(a, i, noe, key);
    return 0;
}
