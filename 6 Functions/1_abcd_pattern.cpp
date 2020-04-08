#include <iostream>
using namespace std;
void print_pattern_abcd(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            char ch = 64 + (char)j;
            cout << ch;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print_pattern_abcd(n);
    return 0;
}