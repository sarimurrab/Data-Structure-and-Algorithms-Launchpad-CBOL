#include <iostream>
using namespace std;
int fibbonacci(int count)
{

    if (count == 0 || count == 1)
    {

        return count;
    }
    return fibbonacci(count - 1) + fibbonacci(count - 2);
}
int main()
{
    int count = 0;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fibbonacci(count) << "\t";
            count++;
        }
        cout << endl;
    }
}