#include <iostream>
using namespace std;
int power(int a, int b)
{
    
    if (b == 0)
    {
        return 1;
    }

    int res = a * power(a, b - 1);
    return res;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = power(a, b);
    cout << a << " ^ " << b << ": " << result;
    return 0;
}