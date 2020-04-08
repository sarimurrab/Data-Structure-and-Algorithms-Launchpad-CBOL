#include <iostream>
using namespace std;
void find_trailing_zeros(int n)
{
    int result = 0;
    int temp = 5;
    while ((n / temp) != 0)
    {
        result = result + (n / temp);
        temp = temp * temp;
    }
    cout << result;
}
int main()
{
    int n;
    cin >> n;
    find_trailing_zeros(n);
    return 0;
}