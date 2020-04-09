#include <iostream>
using namespace std;
int binarySearch(int start, int end, int *arr, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            binarySearch(mid + 1, end, arr, key);
        }
        else
        {
            binarySearch(start, mid - 1, arr, key);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 10;
    int i = binarySearch(0, 10, a, key);

    if (i == -1)
    {
        cout << "Not Found";
    }
    else
    {

        cout << key << " is found at index " << i;
    }

    return 0;
}