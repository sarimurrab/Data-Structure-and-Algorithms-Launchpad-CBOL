#include <iostream>
using namespace std;
int calculate(int n)
{
    if (n <= 3)
        return 1;
    if (n == 4)
        return 2;
    return calculate(n - 1) + calculate(n - 4);
}
int main()
{
    int n;
    cin >> n;
    int total_num_ways = calculate(n);
    cout << total_num_ways;
    return 0;
}


