#include <iostream>
using namespace std;
void print_series(int N1, int N2)
{
    int num = 1;
    int count = 0;
    while (count < N1)
    {
        if ((3 * num + 2) % N2 != 0)
        {
            cout << (3 * num + 2) << endl;
            count = count + 1;
            num = num + 1;
        }
        else
        {
            num = num + 1;
            continue;
        }
    }
}
int main()
{
    int N1, N2;
    cin >> N1;
    cin >> N2;
    if (0 < N1 < 100 && 0 < N2 < 100)
    {
        print_series(N1, N2);
    }
    return 0;
}