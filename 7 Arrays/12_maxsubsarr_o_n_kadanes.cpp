#include <iostream>
#include <climits>

using namespace std;
void kadanes_algo_subarray(int *arr, int n)
{
    int max = INT_MIN;
    int curr_max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        curr_max = std::max(arr[i], arr[i] + curr_max); // MAX BW -3 or -3+curr_max
        max = std::max(max, curr_max);
    }
    cout << "MAX SUM USING KADANES ALGO : " << max;
}
int main()
{
    int n = 9;
    int arr[n] = {-4, 1, 3, -2, 6, 2, -1, -4, 7}; //other {-2, -3, 4, -1, -2, 1, 5, -3 } = 7
    kadanes_algo_subarray(arr, n);
    return 0;
}