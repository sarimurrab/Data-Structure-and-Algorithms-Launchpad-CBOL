#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int res = n * fact(n - 1);
    return res;
}
int main()
{
    int n;
    cin >> n;
    int result = fact(n);
    cout << "Result: " << result;
}