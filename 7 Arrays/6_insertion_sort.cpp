#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {2, 3, 0, 1, 5};

    for (int i = 1; i <= n - 1; i++) //from i=1 to last .....to check from 2nd element
    {
        int temp = arr[i];
        for (int j = i - 1; j >= 0; j--) //FROM J=0 to i-1......to check posn in last part
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}