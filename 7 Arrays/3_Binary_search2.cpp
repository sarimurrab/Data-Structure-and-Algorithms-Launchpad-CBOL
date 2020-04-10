#include <iostream>
using namespace std;
int binarySearch(int a[], int start, int end, int key)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {2, 3, 4, 5, 78, 90, 100, 101, 102, 103};
    cout << binarySearch(a, 0, 9, 103);
}