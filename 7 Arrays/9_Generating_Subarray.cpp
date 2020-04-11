#include <iostream> //BRUTE FORCE APPROACH FOR SUB ARRAY SUM
#include <climits>
using namespace std;
void generate_subarray(int *arr, int n)
{
    int max_sum = INT_MIN;
    int left =  -1;
    int right = -1;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int curr_sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                curr_sum = curr_sum + arr[k];
            }
            cout << endl;
            if (max_sum < curr_sum)
            {
                max_sum = curr_sum;
                left = i; //STORING VALUES OF CURRENT i and j
                right = j;
            }
        }
    }
    cout << "MAXIMUM SUM IS : "<<max_sum<<endl;
    for(int k =left;k<=right;k++) 
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int n = 9;
    int arr[n] = {-4,1,3,-2,6,2,-1,-4,-7};
    generate_subarray(arr, n);
    return 0;
}