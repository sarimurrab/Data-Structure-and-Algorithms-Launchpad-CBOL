#include <iostream>
using namespace std;
int optimPower(int a, int b)
{
    int res, newres;
    if (b == 0)
    {
        return 1;
    }
    res = optimPower(a, b / 2);

    if (b % 2 == 0)
    {
        newres = res * res;
    }
    else if (b % 2 != 0)
    {
        newres = a * res * res;
    }
    return newres;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = optimPower(a, b);
    cout << "Result : " << result;
    return 0;
}