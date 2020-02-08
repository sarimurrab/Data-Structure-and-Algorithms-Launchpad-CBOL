#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {

        return n;
    }

    int res = fib(n - 1) + fib(n - 2);

    return res;
}
int main()
{
    int n;
    cin >> n;
    int res = fib(n);
    cout << res;
}