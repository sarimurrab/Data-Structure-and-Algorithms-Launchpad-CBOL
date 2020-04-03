#include <iostream>
using namespace std;
int main()
{
    long long int N;
    int digit, temp, count = 0;
    cin >> N;
    cin >> digit;

    while (N != 0)
    {
        temp = N % 10;
        if (temp == digit)
            count++;
        N = N / 10;
    }
    cout << count;
    return 0;
}