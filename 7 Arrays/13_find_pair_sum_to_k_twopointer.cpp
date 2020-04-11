#include <iostream>
using namespace std;
void find_pairsum_twopointer(int *arr, int n, int k)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] + arr[j] == k)
        {
            cout << arr[i] << " and " << arr[j] << endl;
            i = i + 1;
            j = j - 1;
        }
        else if (arr[i] + arr[j] < k)
            i = i + 1;
        else
            j = j - 1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the sum for which two pair you want : ";
    cin >> k;
    find_pairsum_twopointer(arr, n, k);
    return 0;
}