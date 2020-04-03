#include <iostream>
using namespace std;
void dec_to_octal(int n)
{
    if (n == 0)
    {
        return;
    }

    dec_to_octal(n / 8);
    cout << n % 8;
}
int main()
{
    long long int n;
    cin >> n;
    dec_to_octal(n);
    return 0;
}