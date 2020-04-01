#include <iostream>
using namespace std;
void oddEven(long long int n)
{

    int oddSum = 0;
    int evenSum = 0;

    while (n != 0)
    {

        int rem = n % 10;
        if (rem % 2 == 0)
        {
            evenSum += rem;
        }
        else
        {
            oddSum += rem;
        }

        n = n / 10;
    }

    if (evenSum % 4 == 0 || oddSum % 3 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int N;
    cin >> N;
    long long int n;
    while (N != 0)
    {
        cin >> n;
        oddEven(n);
        N--;
    }
    return 0;
}