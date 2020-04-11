#include <iostream>
#include <climits>
using namespace std;
void generate_max_subarray_summ(int *arr, int *cumm_arr, int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        int curr_sum = 0;
        for (int j = i; j <= n - 1; j++)
        {
            curr_sum = cumm_arr[j] - cumm_arr[i - 1];
            if (curr_sum > max_sum)
            {
                max_sum = curr_sum;
            }
        }
    }
    cout << "MAX SUB ARRAY SUM : " << max_sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cumm_arr[n] = {0};
    cin >> arr[0];
    cumm_arr[0] = arr[0];

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> arr[i];
        cumm_arr[i] = cumm_arr[i - 1] + arr[i];
    }
    generate_max_subarray_summ(arr, cumm_arr, n);
    return 0;
}