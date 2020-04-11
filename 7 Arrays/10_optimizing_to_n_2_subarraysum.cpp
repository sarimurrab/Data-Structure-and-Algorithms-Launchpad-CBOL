#include <iostream> //OPTIMIZED APPROACH to O(n^2)
#include <climits>
using namespace std;
void generate_subarray(int *arr, int n)
{
    int max_sum = INT_MIN;
    int left =  -1;
    int right = -1;

    for (int i = 0; i <= n - 1; i++)
    {
        int curr_sum = 0;
        for (int j = i; j <= n - 1; j++)  //Used the Last Sum 
        {
            curr_sum = curr_sum + arr[j];
            if(curr_sum>max_sum)
            {
                max_sum = curr_sum;
                left = i;
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
    int n = 8;
    int arr[n] = {-2,-3,4,-1,-2,1,5,-3};  //other {-4,1,3,-2,6,2,-1,-4,-7 } = 10
    generate_subarray(arr, n);
    return 0;
}