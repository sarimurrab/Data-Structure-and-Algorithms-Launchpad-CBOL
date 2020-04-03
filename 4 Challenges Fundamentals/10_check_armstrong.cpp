#include <iostream>
#include <math.h>
using namespace std;
int check_armstrong(int n, int size)
{
    int sum = 0, last_number;
    for (int i = 1; i <= size; i++)
    {
        last_number = n % 10;
        sum = sum + pow(last_number, size);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int size = trunc(log10(n)) + 1;
    int sum = check_armstrong(n, size);
    if (sum == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}