#include <iostream>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    if (a == 1 || a == 2)
    {
        return -1;
    }
    else if (a & 1)
    {
        cout << (a * a - 1) / 2 << " " << (a * a + 1) / 2;
    }
    else
    {
        cout << ((a * a) / 4) - 1 << " " << ((a * a) / 4) + 1;
    }
}