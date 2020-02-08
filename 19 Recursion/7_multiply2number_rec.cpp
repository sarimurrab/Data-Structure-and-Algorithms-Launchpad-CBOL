#include <iostream>
using namespace std;
int multi(int a, int b);
int calulate(int a, int b) // calculation
{
    if (b == 0)
    {
        return 0;
    }
    int sum = a + multi(a, b - 1);
    return sum;
}

int multi(int a, int b) //main logic
{
    if (a > 0 && b > 0) // a = +ve  b = +ve
    {
        int s = calulate(a, b);
        return s;
    }
    else if ((a < 0 && b > 0) || (a > 0 && b < 0)) // a or b = -ve
    {
        a = abs(a);
        b = abs(b);
        int s = calulate(a, b);
        return -abs(s);
    }
    else if (a < 0 && b < 0) //a & b = -ve
    {
        a = abs(a);
        b = abs(b);
        int s = calulate(a, b);
        return s;
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = multi(a, b);
    cout << "Multiplied using Recursion: " << result;
    return 0;
}